/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 02:01:34 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/17 02:01:34 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"
#include <iostream>
#include <fstream>

FileReplacer::FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2)//引数で初期化
{
}

FileReplacer::~FileReplacer()
{
}

std::string FileReplacer::replaceInLine(const std::string& line) const
{
    std::string result = line;  //元の行をコピー
    size_t pos = 0;             //検索開始位置

    while ((pos = result.find(this->s1, pos)) != std::string::npos)
    {
        result.erase(pos, this->s1.length());
        result.insert(pos, this->s2);
        pos += this->s2.length();
    }

    return result;
}

bool FileReplacer::execute(void) const
{
    // エラーチェック: ファイル名が空
    if (this->filename.empty())
    {
        std::cerr << "Error: Filename is empty" << std::endl;
        return false;
    }

    // エラーチェック: s1が空（無限ループ防止）
    if (this->s1.empty())
    {
        std::cerr << "Error: Search string (s1) cannot be empty" << std::endl;
        return false;
    }

    // ファイルを開く
    std::ifstream infile(this->filename.c_str());
    if (!infile.is_open())//存在しないファイルを入力された場合など
    {
        std::cerr << "Error: Cannot open file " << this->filename << std::endl;
        return false;
    }

    // 出力ファイルを作成
    std::string outfilename = this->filename + ".replace";
    std::ofstream outfile(outfilename.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: Cannot create file " << outfilename << std::endl;
        infile.close();
        return false;
    }

    // ファイルを1行ずつ読み込んで置換
    std::string line;
    bool first = true;
    while (std::getline(infile, line))
    {
        std::string replacedLine = replaceInLine(line);
        if (!first)
            outfile << std::endl;
        outfile << replacedLine;
        first = false;
        
        // 書き込みエラーチェック（ディスクフル・権限不足などでの失敗を検出
        if (outfile.fail())
        {
            std::cerr << "Error: Failed to write to file " << outfilename << std::endl;
            infile.close();
            outfile.close();
            return false;
        }
    }

    // 読み込みエラーチェック（EOFではなく、実際のエラー。ファイル破損など）
    if (infile.bad())
    {
        std::cerr << "Error: Failed to read from file " << this->filename << std::endl;
        infile.close();
        outfile.close();
        return false;
    }

    infile.close();
    outfile.close();

    return true;
}
