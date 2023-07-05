/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:47:12 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/04 15:00:02 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <ctime>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &other);
        ~Array();
        Array &operator=(Array const &other);
        T &operator[](unsigned int index) const;
        unsigned int size(void) const;
};

template <typename T>
Array<T>::Array()
{
    this->_array = NULL;
    this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->_array = new T[n];
    this->_size = n;
}

template <typename T>
Array<T>::Array(Array const &other)
{
    this->_array = new T[other._size];
    this->_size = other._size;
    for (unsigned int i = 0; i < this->_size; i++)
        this->_array[i] = other._array[i];
}

template <typename T>
Array<T>::~Array()
{
    delete [] this->_array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
    if (this != &other)
    {
        delete [] this->_array;
        this->_array = new T[other._size];
        this->_size = other._size;
        for (unsigned int i = 0; i < this->_size; i++)
            this->_array[i] = other._array[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index) const
{
    if (index >= this->_size)
        throw std::exception();
    return (this->_array[index]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return (this->_size);
}

template <typename T>
std::ostream&	operator<<(std::ostream& os, const Array<T>& array)
{
    os << "[";
    for (unsigned int i = 0; i < array.size(); i++)
    {
        os << array[i];
        if (i < array.size() - 1)
            os << ", ";
    }
    os << "]";
    return (os);
}

#endif