/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:45:00 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 18:45:00 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str_type) : type(str_type)//typeはメンバー変数（this->type
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType(void) const
{
    return this->type;//メンバー変数type（武器の名前）を返す
}

void Weapon::setType(std::string newType)
{
    this->type = newType;//メンバー変数typeを与えられた引数newTypeにする
}
