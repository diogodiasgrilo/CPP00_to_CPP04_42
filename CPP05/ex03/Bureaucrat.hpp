/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 21:41:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/01 23:56:36 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define MAX_GRADE 1
# define MIN_GRADE 150

# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string	_name;
        int					_grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& bureaucrat);
        ~Bureaucrat();
        Bureaucrat&	operator=(const Bureaucrat& bureaucrat);
        std::string	getName(void) const;
        int			getGrade(void) const;
        void		incrementGrade(void);
        void		decrementGrade(void);
        void        signForm(AForm& form);
        void        executeForm(AForm const & form);

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
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif