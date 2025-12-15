/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:07:46 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 19:07:46 by mesasaki         ###   ########.fr       */
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
    // Constructor
    Zombie(const std::string& name);

    // Destructor
    ~Zombie();

    // Member function
    void announce(void) const;
};

// Function prototypes
Zombie *newZombie(const std::string& name);
void randomChump(const std::string& name);

#endif