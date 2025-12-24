/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:06:11 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/24 21:46:06 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "Horde Member";

    std::cout << "Creating a horde of " << N << " zombies named '" << name << "'..." << std::endl;

    // Create zombie horde
    Zombie *horde = zombieHorde(N, name);

    if (horde == NULL) // エラー処理
    {
        std::cout << "Failed to create zombie horde." << std::endl;
        return 1;
    }

    // Make all zombies announce themselves
    std::cout << "\nZombie announcements:" << std::endl;
    for (int i = 0; i < N; i++)
    {
        std::cout << "Zombie " << i + 1 << ": "; // Zombie 1:
        horde[i].announce();
    }

    // Clean up - delete the horde
    std::cout << "\nDestroying the horde..." << std::endl;
    delete[] horde;

    return 0;
}
