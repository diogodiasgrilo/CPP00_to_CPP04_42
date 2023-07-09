/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:19:25 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/08 22:52:56 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->_n = 0;
}

Span::Span(unsigned int n)
{
    this->_n = n;
}

Span::Span(Span const &other)
{
    this->_n = other._n;
    this->_container = other._container;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &other)
{
    this->_n = other._n;
    this->_container = other._container;
    return (*this);
}

void Span::addNumber(int n)
{
    if (this->_container.size() < this->_n)
        this->_container.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan(void)
{
    if (this->_container.size() < 2)
        throw std::exception();
    std::vector<int> tmp = this->_container;
    std::sort(tmp.begin(), tmp.end());
    int shortest = tmp[1] - tmp[0];
    for (unsigned int i = 2; i < tmp.size(); i++)
        if (tmp[i] - tmp[i - 1] < shortest)
            shortest = tmp[i] - tmp[i - 1];
    return (shortest);
}

int Span::longestSpan(void)
{
    if (this->_container.size() < 2)
        throw std::exception();
    std::vector<int> tmp = this->_container;
    std::sort(tmp.begin(), tmp.end());
    return (tmp[tmp.size() - 1] - tmp[0]);
}