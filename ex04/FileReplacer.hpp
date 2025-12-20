/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 02:01:39 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/17 02:01:39 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>

class FileReplacer
{
private:
    std::string filename;
    std::string s1;
    std::string s2;

    std::string replaceInLine(const std::string& line) const;

public:
    FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2);
    ~FileReplacer();

    bool execute(void) const;
};

#endif