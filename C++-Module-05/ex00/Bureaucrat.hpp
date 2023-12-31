/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:51:24 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/20 17:27:58 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const  &src);
        void operator=(Bureaucrat const  &src);
        Bureaucrat(std::string name, int grade);

        void    decrement(void);
        void    increment(void);
        const std::string getName(void) const;
        int getGrade(void)const;    
    
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what(void) const throw();
            
        };
        class GradeTooLowException  : public std::exception
        {
            public:
                const char *what(void) const throw();
        };

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src);