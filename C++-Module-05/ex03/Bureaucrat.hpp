/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:50:15 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/19 14:50:16 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

class AForm;

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
        void       executeForm(AForm const &form);

        void        decrement(void);
        void        increment(void);
        const       std::string getName(void) const;
        const       int getGrade(void)const;
        void        signForm(AForm &aform);
    
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