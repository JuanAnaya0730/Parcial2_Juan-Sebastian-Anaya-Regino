#include "proyectil.h"

float Proyectil::getRSensor() const
{
    return rSensor;
}

Proyectil::Proyectil(float X0, float Y0)
{
    X = X0;
    Y = Y0;
}

float Proyectil::getX() const
{
    return X;
}

float Proyectil::getY() const
{
    return Y;
}

void Proyectil::setX(float Xnew)
{
    X = Xnew;
}

void Proyectil::setY(float Ynew)
{
    Y = Ynew;
}


void Proyectil::setRSensor(float rango)
{
    rSensor = rango;
}
