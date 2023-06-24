/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:25:00 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/24 18:56:02 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main(int argc, char *argv[])
{
    Harl		harl;
    int         level;
    std::string	comments[7];
    comments[0] = "DEBUG";
    comments[1] = "INFO";
    comments[2] = "WARNING";
    comments[3] = "ERROR";
        
    if (argc != 2)
    {
        std::cout << "Usage: ./harl [DEBUG, INFO, WARNING, ERROR]" << std::endl;
        return (1);
    }
    for (int i = 0; i < 4; i++)
        if (argv[1] == comments[i])
            level = i;
    harl.complain(level);
}