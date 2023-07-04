/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:59:44 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/04 13:53:18 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Base;

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif