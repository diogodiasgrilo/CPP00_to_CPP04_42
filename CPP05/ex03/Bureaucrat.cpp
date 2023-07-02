/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:36:23 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 00:25:17 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    try
    {
        if (grade < MAX_GRADE)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > MIN_GRADE)
            throw Bureaucrat::GradeTooLowException();
        else
            this->_grade = grade;
    }
    catch (std::exception & e) {std::cout << "Exception caught: " << e.what() << std::endl;}
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : _name(bureaucrat._name) {*this = bureaucrat;}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
    this->_grade = bureaucrat._grade;
    return (*this);
}

std::string	Bureaucrat::getName(void) const {return (this->_name);}

int			Bureaucrat::getGrade(void) const {return (this->_grade);}

void Bureaucrat::incrementGrade(void)
{
    try
    {
        if (this->_grade - 1 < MAX_GRADE)
            throw Bureaucrat::GradeTooHighException();
        else
            this->_grade--;
    }
    catch (GradeTooHighException & e) {std::cout << "Exception caught: " << e.what() << std::endl;}
}

void Bureaucrat::decrementGrade(void)
{
    try
    {
        if (this->_grade + 1 > MIN_GRADE)
            throw Bureaucrat::GradeTooLowException();
        else
            this->_grade++;
    }
    catch (GradeTooLowException & e) {std::cout << "Exception caught: " << e.what() << std::endl;}
}

void Bureaucrat::signForm(AForm& form)
{
    if (this->_grade <= form.getGradeToSign()) {
        if (!form.getSigned())
		    std::cout << this->_name << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}
	else if (this->_grade > form.getGradeToSign()) {
		std::cout << this->_name << " cannot sign " << form.getName() << " because his grade is too low." << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm &form)
{
    if (this->_grade > form.getGradeToExecute() || !form.getSigned() || this->_grade < MAX_GRADE)
        std::cout << this->_name << " cannot execute form: " << form.getName() << std::endl;
    else
    {
        std::cout << this->_name << " executed " \
                << form.getName() << std::endl;
    }
    form.execute(*this);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {return ("Bureaucrat grade is too high!");}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {return ("Bureaucrat grade is too low!");}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (os);
}
