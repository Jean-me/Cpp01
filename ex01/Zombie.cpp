/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:06:20 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/24 21:46:10 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default constructor
Zombie::Zombie() : m_name("")
{
}

// Parameterized constructor
Zombie::Zombie(const std::string& name) : m_name(name)
{
}

// Destructor
Zombie::~Zombie()
{
    std::cout << m_name << " is destroyed." << std::endl;
}

// Member function
void Zombie::announce(void) const
{
    std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Set name function
void Zombie::setName(const std::string& name)
{
    m_name = name;
}
