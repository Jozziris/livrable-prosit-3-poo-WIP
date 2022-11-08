#include "PCH.h"

int main()
{


    //std::cout << "parcour entre trois points 2D\n" << std::endl;
    point P1(0, 0);
    std::cout << "point 1 :" << std::endl;
    P1.afficher();

    point P2(0, 2);
    std::cout << std::endl;
    std::cout << "point 1 :" << std::endl;
    P2.afficher();

    point P3(2, 2);
    std::cout << std::endl;
    std::cout << "point 1 :" << std::endl;
    P3.afficher();

    std::cout << std::endl;

    /*parcour chemin(P1, P2, P3);
    std::cout << chemin.calcul_parcour() << std::endl;
    std::cout <<"\n" << std::endl;*/



    /*std::cout << "parcour entre trois points 3D\n" << std::endl;
    point3D P4(0, 0, 0);
    std::cout << "point 1 :" << std::endl;
    P4.afficher();

    point3D P5(1, 0, 0);
    std::cout << std::endl;
    std::cout << "point 1 :" << std::endl;
    P5.afficher();

    point3D P6(1, 0, 1);
    std::cout << std::endl;
    std::cout << "point 1 :" << std::endl;
    P6.afficher();

    std::cout << std::endl;

    parcour3D chemin3D(P4, P5, P6);
    std::cout << chemin3D.calcul_parcour3D() << std::endl;
    std::cout << "\n" << std::endl;*/
}