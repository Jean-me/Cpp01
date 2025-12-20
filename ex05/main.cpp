/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 00:00:00 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/19 20:11:33 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "=== Testing DEBUG level ===" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\n=== Testing INFO level ===" << std::endl;
    harl.complain("INFO");

    std::cout << "\n=== Testing WARNING level ===" << std::endl;
    harl.complain("WARNING");

    std::cout << "\n=== Testing ERROR level ===" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n=== Testing invalid level ===" << std::endl;
    harl.complain("INVALID");

    return 0;
}
