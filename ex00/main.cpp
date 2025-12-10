/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:06:57 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 19:06:57 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "=== Creating heap zombie ===" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    
    std::cout << "\n=== Creating stack zombie ===" << std::endl;
    randomChump("StackZombie");
    
    std::cout << "\n=== Deleting heap zombie ===" << std::endl;
    delete heapZombie;
    
    std::cout << "\n=== Program end ===" << std::endl;
    return 0;
}