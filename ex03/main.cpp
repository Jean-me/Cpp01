/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:05:30 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 19:05:30 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("a completely plain golf ball");
        HumanA bob("Bob", club); // std::string name, Weapon& weapon
        bob.attack();            //<name> attacks with their <weapon type>
        club.setType("an ordinary weed killer");
        bob.attack();
    }
    {
        Weapon club = Weapon("a completely plain golf ball");
        HumanB jim("Jim");
        jim.attack(); // Jim has no weapon
        jim.setWeapon(club);
        jim.attack();
        club.setType("an ordinary weed killer");
        jim.attack();
    }

    return 0;
}
