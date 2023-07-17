/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:24:56 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/13 22:57:33 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <exception>
#include <cctype>
#include <stack>
#include <cstdlib>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define ENDCOLOR "\033[0m"

struct	operandFunctions_s {
	char	op;
	int	(*f)(int nb1, int nb2);
};

bool	operands(char c);
void	checkErrors(int ac, char *av, int i);
void	rpn(char *av, int i);

#endif