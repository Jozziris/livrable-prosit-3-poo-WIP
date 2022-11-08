#include "parcour.h"

parcour::parcour(point nb1, point nb2, point nb3)
{
	this->p_1 = nb1;
	this->p_2 = nb2;
	this->p_3 = nb3;
}

double parcour::calcul_parcour()
{
	fonction distance;
	return distance.distance2D(this->p_1, this->p_2);
}