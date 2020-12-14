#ifndef PROYECTIL_H
#define PROYECTIL_H

class Proyectil
{
private:
    float X; //Posicion en X
    float Y; //Posicion en Y
    float rSensor; //Rango del sensor

public:
    Proyectil(float X0, float Y0);

    void setX(float Xnew);
    void setY(float Ynew);
    void setRSensor(float rango);

    float getX() const;
    float getY() const;
    float getRSensor() const;
};

#endif // PROYECTIL_H
