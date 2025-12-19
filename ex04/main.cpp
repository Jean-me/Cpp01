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

#include "FileReplacer.hpp"
#include <iostream>

//     # 正常なケース
// ./ex04 test.txt "hello" "HELLO"

// # エラーケース1: 存在しないファイル
// ./ex04 notexist.txt "hello" "HELLO"

// # エラーケース2: s1が空
// ./ex04 test.txt "" "HELLO"

// # 特定の文字列を削除したい場合
// ./ex04 test.txt "REMOVE_THIS" ""
// # 入力: "text REMOVE_THIS more text"
// # 出力: "text  more text"

int main(int argc, char **argv)
{
    if (argc != 4)//引数チェック
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    FileReplacer replacer(argv[1], argv[2], argv[3]);
    
    if (!replacer.execute())
        return 1;

    return 0;
}

