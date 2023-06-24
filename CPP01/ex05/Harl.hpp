/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:58:33 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/24 17:55:08 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void (Harl::*f[4])(void);
        std::string level[4];
    public:
        Harl();
        ~Harl(void);
        void complain(std::string level );
};

#endif