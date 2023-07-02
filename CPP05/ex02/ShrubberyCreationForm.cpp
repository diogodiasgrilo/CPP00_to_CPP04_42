/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 21:30:16 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 00:54:47 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("default", "shrubbery creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, "shrubbery creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src) : AForm(src) 
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) 
{
    AForm::operator=(src);
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    std::ofstream  file;

	if (checkRequirements(executor))
	{
		file.open(this->getTarget() + "_shrubbery",
				  std::ofstream::out | std::ofstream::trunc);
		if (file.fail())
		{
			std::cerr << "Error opening the outfile" << std::endl;
		}
		file << "      ccee88oo " << std::endl;
		file << "   C8O8O8Q8PoOb o8oo " << std::endl;
		file << "  dOB69QO8PdUOpugoO9bD " << std::endl;
		file << " CgggbU8OU qOp qOdoUOdcb " << std::endl;
		file << "     6OuU  /p u gcoUodpP " << std::endl;
		file << "       \\\\//  /douUP " << std::endl;
		file << "         \\\\//// " << std::endl;
		file << "          |||/" << std::endl;
		file << "          ||||/ " << std::endl;
		file << "          ||||| " << std::endl;
		file << "    .....//||||\\.... " << std::endl;
		file.close();
	}
}
