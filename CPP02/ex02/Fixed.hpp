/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 22:58:05 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 19:24:39 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

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
        Fixed &operator=(const Fixed &fixed);
        ~Fixed(void);
        bool operator>(const Fixed &fixed) const;
        bool operator<(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;
        Fixed operator+(const Fixed &fixed) const;
        Fixed operator-(const Fixed &fixed) const;
        Fixed operator*(const Fixed &fixed) const;
        Fixed operator/(const Fixed &fixed) const;
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        float   toFloat( void ) const;
        int     toInt( void ) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif