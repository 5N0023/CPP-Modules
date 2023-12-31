/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:51:44 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:51:45 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria & operator=(AMateria const &src);
        std::string const & getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria();
};