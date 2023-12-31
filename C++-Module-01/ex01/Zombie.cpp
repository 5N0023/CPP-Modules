/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:31:14 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/10 19:51:19 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():name("a Zombie"){}

Zombie::Zombie(std::string name): name(name) {
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie(void)
{
    std::cout << name << " has been destroyed!" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}