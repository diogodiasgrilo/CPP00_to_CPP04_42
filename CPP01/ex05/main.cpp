/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:25:00 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/24 17:57:31 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main(void)
{
    Harl		harl;
    std::string	comments[7];
    comments[0] = "DEBUG";
    comments[1] = "INFO";
    comments[2] = "WARNING";
    comments[3] = "ERROR";

    for (int i = 0; i < 4; i++)
        harl.complain(comments[i]);

}