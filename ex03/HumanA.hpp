/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:05:09 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 19:05:09 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon; // 参照（常に武器を持つ）参照を使わないと、mainの2回目のattack()で古い武器が表示されてしまいます！

public:
    HumanA(const std::string& name, Weapon& weapon); // 武器が必須、コンストラクタのみ
    ~HumanA();

    void attack(void) const;
};

#endif
