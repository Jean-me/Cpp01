/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:34:10 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/14 18:34:10 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // ファイルを開く
    std::ifstream infile(filename.c_str());//C++98のせいでc_strが必要、Cstyle変換
    if (!infile.is_open())
    {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return 1;
    }

    // 出力ファイルを作成
    std::string outfilename = filename + ".replace";
    std::ofstream outfile(outfilename.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: Cannot create file " << outfilename << std::endl;
        infile.close();
        return 1;
    }

    // ファイルを1行ずつ読み込んで置換
    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();

    return 0;
}
