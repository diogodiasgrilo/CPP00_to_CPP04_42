/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 16:12:41 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    // more tests
    std::cout << std::endl << "More tests 1:" << std::endl;
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);
    me->use(-1, *bob);
    me->use(0, *bob);
    
    std::cout << std::endl << "More tests 2:" << std::endl;
    me->unequip(0);
    me->use(0, *bob);
    me->unequip(0);
    me->use(0, *bob);
    
    std::cout << std::endl << "More tests 3:" << std::endl;
    me->equip(tmp);
    me->use(0, *bob);
    me->equip(tmp);
    me->use(1, *bob);
    me->equip(tmp);

    std::cout << std::endl << "More tests 4:" << std::endl;
    std::cout << "first" << std::endl;
    me->use(0, *bob);
    std::cout << "second" << std::endl;
    me->unequip(0);
    std::cout << "third" << std::endl;
    me->use(0, *bob);
    std::cout << "fourth" << std::endl;
    me->unequip(0);
    std::cout << "end" << std::endl;
    delete bob;
    delete me;
    delete src;
    return 0;
}