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
    : filename(filename), s1(s1), s2(s2)
{
}

FileReplacer::~FileReplacer()
{
}

std::string FileReplacer::replaceInLine(const std::string& line)
{
    std::string result = line;
    size_t pos = 0;

    while ((pos = result.find(this->s1, pos)) != std::string::npos)
    {
        result.erase(pos, this->s1.length());
        result.insert(pos, this->s2);
        pos += this->s2.length();
    }

    return result;
}

bool FileReplacer::execute(void)
{
    // ファイルを開く
    std::ifstream infile(this->filename.c_str());
    if (!infile.is_open())
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
    while (std::getline(infile, line))
    {
        std::string replacedLine = replaceInLine(line);
        outfile << replacedLine << std::endl;
    }

    infile.close();
    outfile.close();

    return true;
}
