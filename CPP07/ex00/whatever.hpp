/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:35:32 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 20:39:02 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

void    swap(T &a, T &b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>

T       min(T &a, T &b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>

T       max(T &a, T &b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif
