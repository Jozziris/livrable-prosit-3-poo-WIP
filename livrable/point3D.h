#pragma once
#include "point.h"

class point3D:public point
{
public:
	point3D(void);
	point3D(int nb1, int nb2, int nb3);
	void afficher(void);
	int getz(void);
private:
	void ini(int nb);
};

