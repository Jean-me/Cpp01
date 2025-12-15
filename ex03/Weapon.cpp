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

Weapon::Weapon(const std::string& str_type) : type(str_type)//typeはメンバー変数（this->type
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void) const//
{
    return this->type;//メンバー変数type（武器の名前）を返す
}

void Weapon::setType(const std::string& newType)//newType = "puri"など引数として与えたはずの名前を関数内で勝手に変えられることを防げる
{
    this->type = newType;//メンバー変数typeを与えられた引数newTypeにする（この動作は直接メンバ変数代入のため、書き換え可能。メンバ変数がconstでなければ）
}
