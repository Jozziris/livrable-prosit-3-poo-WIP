#include "parcour3D.h"
#include "fonction.h"

parcour3D::parcour3D(point3D nb1, point3D nb2, point3D nb3)
{
	this->p3D_1 = nb1;
	this->p3D_2 = nb2;
	this->p3D_3 = nb3;
}

float parcour3D::calcul_parcour3D()
{
	fonction distance;
	float a = distance.distance3D(this->p3D_1, this->p3D_2) + distance.distance3D(this->p3D_2, this->p3D_3);
	return a;
}