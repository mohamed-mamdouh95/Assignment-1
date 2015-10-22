#include "move.h"
#include <iostream>

move::move(double a , double b)
{
	x = a;
	y = b;
}
void move:: showMove()
{
	std::cout << "x = " << x << " " << "y = " << y << std::endl;
}
move move::add(const move & m)
{
	move a(this->x + m.x, this->y + m.y);
	return a;
}
void move::reset(double a, double b)
{
	x = a;
	y = b;

}

