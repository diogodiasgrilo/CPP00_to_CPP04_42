/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:14:36 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/01 19:19:26 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string	_name;
        bool				_signed;
        const int			_gradeToSign;
        const int			_gradeToExecute;
        Form();
    public:
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form& form);
        ~Form();
        Form&	operator=(const Form& form);
        std::string	getName(void) const;
        bool		getSigned(void) const;
        int			getGradeToSign(void) const;
        int			getGradeToExecute(void) const;
        void		beSigned(const Bureaucrat& bureaucrat);


        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class AlreadySignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&	operator<<(std::ostream& os, const Form& form);

#endif