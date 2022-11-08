#pragma once
#include "PCH.h"

class parcour
{
private:
	point p_1;
	point p_2;
	point p_3;
public:
	parcour(point nb1, point nb2, point nb3);
	float calcul_parcour();
};

