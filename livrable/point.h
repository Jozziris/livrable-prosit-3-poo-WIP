#pragma once
class point
{
protected:
	int z;
public:
	point(void);
	point(int nb1, int nb2);
	int getx(void);
	int gety(void);
	void afficher(void);
private:
	void ini_point(int nb1, int nb2);
	int x, y;
};

