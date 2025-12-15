/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:07:22 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 19:07:22 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(const std::string& name)// const参照渡し - コピーなし、変更不可（速い、安全）
{
    Zombie* zombie = new Zombie(name);
    return zombie;
}