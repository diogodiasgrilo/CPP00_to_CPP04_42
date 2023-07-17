/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:15:08 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/13 22:58:29 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sys/stat.h>
#include <map>
#include <cstring>
#include <string>
#include <exception>
#define REDCOLOR "\033[1;31m"
#define GRNCOLOR "\033[1;32m"
#define ENDCOLOR "\033[0m"

void	checkErrors(int ac, char **av);
void	btc(const char *dataBase, const char *inputFile);

#endif
