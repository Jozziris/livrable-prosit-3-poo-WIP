#include "fonction.h"

double fonction::distance2D(point p1, point p2)
{
	return sqrt((p2.getx() - p1.getx()) * (p2.getx() - p1.getx()) + (p2.gety() - p1.gety()) * (p2.gety() - p1.gety()));
}

/*double fonction::distance3D(point3D p1, point3D p2)
{
	double a = sqrt((p2.getx() - p1.getx()) * (p2.getx() - p1.getx()));
	double b = sqrt((a * a) + (p2.getz() - p1.getz()));
	return b;
}*/