/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:19:12 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/08 22:52:51 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>
# include <vector>
# include <deque>
# include <iostream>
# include <string>
# include <ctime>
# include <algorithm>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _container;
        Span();
    public:
        Span(unsigned int n);
        Span(Span const &other);
        ~Span();
        Span &operator=(Span const &other);
        void addNumber(int n);
        int shortestSpan(void);
        int longestSpan(void);
        // make one for a range of iterators
        template <typename T>
        void addManyNumber(T begin, T end)
        {
            if (this->_container.size() + std::distance(begin, end) > this->_n)
                throw std::exception();
            this->_container.insert(this->_container.end(), begin, end);
        }
};

#endif