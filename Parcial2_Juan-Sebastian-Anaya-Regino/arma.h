#ifndef ARMA_H
#define ARMA_H

#include <iostream>
#include <math.h>
#include "proyectil.h"

using namespace std;

#define g 9.81
#define pi 3.14159

class Arma
{
private:
    float X; //Posicion en X del arma.
    float Y; //Posicion en Y del arma.

//    float Xf; //Posicion final en X de un disparo.
//    float Yf; //Posicion final en Y de un disparo.

public:
    Arma(float X0, float Y0);
    //void apunta(Arma objetivo);
    int disparar(Arma objetivo, float V0, int angulo);

    float getX() const;
    float getY() const;
};

#endif // ARMA_H
