/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/05 15:13:02 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    std::list<int> l;
    std::deque<int> d;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    std::cout << "Vector: " << easyfind(v, 3) << std::endl;
    std::cout << "List: " << easyfind(l, 3) << std::endl;
    std::cout << "Deque: " << easyfind(d, 3) << std::endl;
    std::cout << "Vector: " << easyfind(v, 5) << std::endl;
    std::cout << "List: " << easyfind(l, 5) << std::endl;
    std::cout << "Deque: " << easyfind(d, 5) << std::endl;
    return (0);
}