#ifndef _POINT_HPP_
#define _POINT_HPP_

#include "Fixed.hpp"
#include <iostream>

class Point {
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &src);
		~Point();

		Point &	operator=(Point const &rSym);
		Point	operator-(Point const &rSym);
		
		Fixed const	getX() const;
		Fixed const	getY() const;
		
	private:
		Fixed const	x;
		Fixed const	y;
};

std::ostream &	operator<<(std::ostream &o, Point const &rSym);

#endif