/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:01:09 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 19:52:29 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point(void);
        Point(const float x, const float y);
        Point(const Point &point);
        Point &operator=(const Point &point);
        ~Point(void);
        Fixed getX(void) const;
        Fixed getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif