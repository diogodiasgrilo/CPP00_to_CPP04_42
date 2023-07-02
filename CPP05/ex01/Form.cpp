/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:14:42 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/01 19:19:40 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) 
: _name(name), 
_signed(false),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute)
{
    try
    {
        if (gradeToSign < MAX_GRADE)
            throw Form::GradeTooHighException();
        else if (gradeToSign > MIN_GRADE)
            throw Form::GradeTooLowException();
        else
            this->_signed = false;
    }
    catch (std::exception & e) {std::cout << "Exception caught: " << e.what() << std::endl;}
}

Form::Form(const Form& form) 
: _name(form._name), 
_gradeToSign(form._gradeToSign),
 _gradeToExecute(form._gradeToExecute)
{
    *this = form;
}

Form::~Form() {}

Form&	Form::operator=(const Form& form)
{
    this->_signed = form._signed;
    return (*this);
}

std::string	Form::getName(void) const {return (this->_name);}

bool    Form::getSigned(void) const {return (this->_signed);}

int		Form::getGradeToSign(void) const {return (this->_gradeToSign);}

int		Form::getGradeToExecute(void) const {return (this->_gradeToExecute);}

void    Form::beSigned(const Bureaucrat& bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() > this->_gradeToSign)
            throw Form::GradeTooLowException();
        else if (bureaucrat.getGrade() < MIN_GRADE)
            throw Form::GradeTooHighException();
        else
            this->_signed = true;
    }
    catch (GradeTooLowException & e) {std::cout << e.what() << std::endl;}
    catch (GradeTooHighException & e) {std::cout << e.what() << std::endl;};
}

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
    os << "Form " << form.getName() << " is ";
    if (form.getSigned())
        os << "signed";
    else
        os << "not signed";
    os << " and requires a grade " << form.getGradeToSign() << " to be signed and a grade " << form.getGradeToExecute() << " to be executed." << std::endl;
    return (os);
}

const char* Form::GradeTooHighException::what() const throw() {return ("Bureaucrat grade is lower than minimum grade of 1!");}
const char* Form::GradeTooLowException::what() const throw() {return ("Bureaucrat grade too low to sign the form!");}
const char* Form::AlreadySignedException::what() const throw() {return ("Form not signed!");}
