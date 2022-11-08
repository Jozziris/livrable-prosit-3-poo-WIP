#pragma once
#include "PCH.h"

class parcour3D
{
private:
	point3D p3D_1;
	point3D p3D_2;
	point3D p3D_3;
public:
	parcour3D(point3D nb1, point3D nb2, point3D nb3);
	float calcul_parcour3D();
};

