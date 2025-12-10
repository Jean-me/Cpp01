/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:06:29 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 19:06:31 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string m_name;

public:
    // Constructors
    Zombie();                 // Default constructor
    Zombie(std::string name); // Parameterized constructor

    // Destructor
    ~Zombie();

    // Member functions
    void announce(void);
    void setName(std::string name);
};

// Function prototype
Zombie *zombieHorde(int N, std::string name);

#endif
