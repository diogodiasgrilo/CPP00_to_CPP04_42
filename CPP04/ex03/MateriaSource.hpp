/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:17:28 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 14:09:42 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_materia[4];
        int         _count;
    public:
        MateriaSource();
        MateriaSource(MateriaSource &src);
        MateriaSource &operator=(MateriaSource const &src);
        ~MateriaSource();
        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
        int getCount() const;
        AMateria *getMateria(int i) const;
        void setMateria(int i, AMateria *m);
        void setCount(int count);
};

#endif
