/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 22:58:14 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/25 19:58:23 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
: fixed_point_value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
: fixed_point_value(i << 8)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
: fixed_point_value(roundf(f * (1 << fractional_bits)))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) 
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(void) {
    // std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->setRawBits(fixed.getRawBits());
    return *this;
}

float   Fixed::toFloat( void ) const 
{
    return ((float)fixed_point_value / (1 << fractional_bits));
}

int     Fixed::toInt( void ) const
{
    return (fixed_point_value >> fractional_bits);
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return fixed_point_value;
}

void Fixed::setRawBits(int const raw) {
    fixed_point_value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->fixed_point_value > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (this->fixed_point_value < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (this->fixed_point_value >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (this->fixed_point_value <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (this->fixed_point_value == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (this->fixed_point_value != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    this->fixed_point_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->fixed_point_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}