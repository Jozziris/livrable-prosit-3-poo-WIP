#include "PCH.h"

point::point(void)
{
	point::ini_point(0, 0);
}

point::point(int nb1, int nb2)
{
	point::ini_point(nb1, nb2);
}

void point::ini_point(int nb1, int nb2)
{
	this->x = nb1;
	this->y = nb2;
}

int point::getx()
{
	return this->x;
}

int point::gety()
{
	return this->y;
}

void point::afficher(void)
{
	std::cout << "x = " << this->x << std::endl;
	std::cout << "y = " << this->y << std::endl;
}