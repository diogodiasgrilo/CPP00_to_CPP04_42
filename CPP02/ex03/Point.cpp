/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:01:22 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 19:53:14 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point() 
: x(0), y(0)
{
    return ;
}

Point::~Point(void) 
{
}

Point::Point(const float x, const float y)
: x(x), y(y)
{
    return ;
}

Point::Point(const Point &point)
: x(point.x), y(point.y)
{
    return ;
}

Point &Point::operator=(const Point &point) 
{
    Point  *tmp = new Point(point);
    if (this != &point)
    {
        delete this;
        return *tmp;
    }
    return *this;
}

Fixed Point::getX(void) const 
{
    return this->x;
}

Fixed Point::getY(void) const 
{
    return this->y;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed   x = point.getX();
    Fixed   y = point.getY();
    Fixed   x1 = a.getX();
    Fixed   y1 = a.getY();
    Fixed   x2 = b.getX();
    Fixed   y2 = b.getY();
    Fixed   x3 = c.getX();
    Fixed   y3 = c.getY();
    Fixed   a1 = ((x - x1) * (y2 - y1)) - ((x2 - x1) * (y - y1));
    Fixed   a2 = ((x - x2) * (y3 - y2)) - ((x3 - x2) * (y - y2));
    Fixed   a3 = ((x - x3) * (y1 - y3)) - ((x1 - x3) * (y - y3));

    if ((a1 >= 0 && a2 >= 0 && a3 >= 0) || (a1 <= 0 && a2 <= 0 && a3 <= 0))
        return true;
    return false;
}