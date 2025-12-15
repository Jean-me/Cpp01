/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:06:43 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/14 01:56:36 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, const std::string& name)
{
    if (N <= 0)
        return NULL;

    // Create an array of N zombies
    Zombie *horde = new Zombie[N];

    // Set the name for each zombie in the horde
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }

    return horde;
}
