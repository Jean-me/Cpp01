/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:06:00 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 19:06:00 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
  std::string str = "HI THIS IS BRAIN";
  std::string* stringPTR = &str;  // ポインタ
  std::string& stringREF = str;   // 参照

  // アドレスの出力
  std::cout << "Address of the string variable : " << &str << std::endl;
  std::cout << "Address held by stringPTR : " << stringPTR << std::endl;
  std::cout << "Address held by stringREF : " << &stringREF << std::endl;
  std::cout << std::endl;
  // 値の出力
  std::cout << "Value of the string variable : " << str << std::endl;
  std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
  std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;

  return (0);
}
