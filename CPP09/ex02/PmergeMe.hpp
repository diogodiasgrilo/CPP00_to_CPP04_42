/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:27:18 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/13 10:47:25 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <exception>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <deque>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define YELCOLOR "\033[1;33m"
#define CYANCOLOR "\033[1;36m"
#define ENDCOLOR "\033[0m"

struct timer
{
	clock_t	start;
	clock_t	vectortimer;
	clock_t	dequetimer;
};

void	checkErrors(int ac, char **av);
void	sort(int ac, char **av);

#endif