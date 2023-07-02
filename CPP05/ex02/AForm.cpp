/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:14:42 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 00:22:09 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
: _name("default"),
_signed(false),
_gradeToSign(150),
_gradeToExecute(150),
_target("default")
{}

AForm::AForm(std::string target, std::string name, int gradeToSign, int gradeToExecute) 
: _name(name), 
_signed(false),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute),
_target(target)
{
    try
    {
        if (gradeToSign < MAX_GRADE)
            throw AForm::GradeTooHighException();
        else if (gradeToSign > MIN_GRADE)
            throw AForm::GradeTooLowException();
        else
            this->_signed = false;
    }
    catch (std::exception & e) {std::cout << "Exception caught: " << e.what() << std::endl;}
}

AForm::AForm(const AForm& form) 
: _name(form._name), 
_gradeToSign(form._gradeToSign),
 _gradeToExecute(form._gradeToExecute)
{
    *this = form;
}

AForm::~AForm() {}

AForm&	AForm::operator=(const AForm& form)
{
    this->_signed = form._signed;
    this->_target = form._target;
    return (*this);
}

std::string	AForm::getName(void) const {return (this->_name);}

bool    AForm::getSigned(void) const {return (this->_signed);}

int		AForm::getGradeToSign(void) const {return (this->_gradeToSign);}

int		AForm::getGradeToExecute(void) const {return (this->_gradeToExecute);}

void    AForm::beSigned(const Bureaucrat& bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() > this->_gradeToSign)
            throw AForm::GradeTooLowException();
        else if (bureaucrat.getGrade() < MAX_GRADE)
            throw AForm::GradeTooHighException();
        else
            this->_signed = true;
    }
    catch (GradeTooLowException & e) {std::cout << e.what() << std::endl;}
    catch (GradeTooHighException & e) {std::cout << e.what() << std::endl;};
}

std::string AForm::getTarget() const
{
    return (this->_target);
}

bool    AForm::checkRequirements(Bureaucrat const &executor) const
{
    try
    {
        if (executor.getGrade() > this->_gradeToExecute)
            throw AForm::GradeTooLowExecutionException();
        else if (executor.getGrade() < MAX_GRADE)
            throw AForm::GradeTooHighException();
        else if (!this->_signed)
            throw AForm::NotSignedException();
        else
            return (true);
    }
    catch (GradeTooLowExecutionException & e) {std::cout << e.what() << this->getName() << std::endl;}
    catch (GradeTooHighException & e) {std::cout << e.what() << std::endl;}
    catch (NotSignedException & e) {std::cout << e.what() << std::endl;}
    return (false);
}

std::ostream&	operator<<(std::ostream& os, const AForm& form)
{
    os << "Form " << form.getName() << " is ";
    if (form.getSigned())
        os << "signed";
    else
        os << "not signed";
    os << " and requires a grade " << form.getGradeToSign() << " to be signed and a grade " << form.getGradeToExecute() << " to be executed." << std::endl;
    return (os);
}

const char* AForm::GradeTooHighException::what() const throw() {return ("Bureaucrat grade is lower than minimum grade of 1!");}
const char* AForm::GradeTooLowException::what() const throw() {return ("Bureaucrat grade too low to sign the form: ");}
const char* AForm::GradeTooLowExecutionException::what() const throw() {return ("Bureaucrat grade too low to execute the form: ");}
const char* AForm::AlreadySignedException::what() const throw() {return ("Form not signed!");}
const char* AForm::NotSignedException::what() const throw() {return ("Form not signed!");}
