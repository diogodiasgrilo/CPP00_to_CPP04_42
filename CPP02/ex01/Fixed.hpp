/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 22:58:05 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 19:00:34 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
    private:
        int fixed_point_value;
        static const int fractional_bits = 8;
    public:
        Fixed(void);
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &fixed);
        Fixed   &operator=(const Fixed &fixed);
        ~Fixed(void);
        float   toFloat( void ) const;
        int     toInt( void ) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif