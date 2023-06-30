/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:46:42 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 14:55:31 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
        unsigned int _equiped;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &src);
        AMateria &operator=(AMateria const &src);
        virtual ~AMateria();
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        std::string const & getType() const;
        unsigned int const & getEquipped() const;
        void setEquipped(unsigned int const &equiped);
};

#endif