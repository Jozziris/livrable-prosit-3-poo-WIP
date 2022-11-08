#include "PCH.h"

point3D::point3D(void): point(0,0)
{
	point3D::ini(0);
}

point3D::point3D(int nb1, int nb2, int nb3) : point(nb1,nb2)
{
	point3D::ini(nb3);
}

void point3D::ini(int nb)
{
	this->z = nb;
}

void point3D::afficher(void)
{
	point::afficher();
	std::cout << "z = " << this->z << std::endl;
}

int point3D::getz()
{
	return this->z;
}