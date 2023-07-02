/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:14:36 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 00:21:41 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string	_name;
        bool				_signed;
        const int			_gradeToSign;
        const int			_gradeToExecute;
        std::string         _target;
        AForm();
    public:
        AForm(std::string target, std::string name, int gradeToSign, int gradeToExecute);
        AForm(const AForm& form);
        ~AForm();
        AForm&	operator=(const AForm& formm);
        std::string	getName(void) const;
        bool		getSigned(void) const;
        int			getGradeToSign(void) const;
        int			getGradeToExecute(void) const;
        void		beSigned(const Bureaucrat& bureaucrat);
        std::string getTarget() const;
        bool        checkRequirements(Bureaucrat const &executor) const;
        virtual void execute(Bureaucrat const &executor) const = 0;


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
        class GradeTooLowExecutionException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class AlreadySignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class NotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&	operator<<(std::ostream& os, const AForm& form);

#endif