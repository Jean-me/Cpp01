/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:05:21 by mesasaki          #+#    #+#             */
/*   Updated: 2025/12/10 19:05:21 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weapon; // ポインタ（武器を持たない場合もある）、HumanAとの違い

public:
    HumanB(std::string name); // 武器なしで作成可能（Weaponは任意）
    ~HumanB();

    void setWeapon(Weapon &weapon); // setWeapon()で後から武器を設定
    void attack(void);
};

#endif
