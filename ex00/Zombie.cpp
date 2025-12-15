/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:07:52 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 19:07:52 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
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