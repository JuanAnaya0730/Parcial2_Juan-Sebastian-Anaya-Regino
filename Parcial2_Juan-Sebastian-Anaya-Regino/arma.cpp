#include "arma.h"

Arma::Arma(float X0, float Y0)
{
    X = X0;
    Y = Y0;
}

//void Arma::apunta(Arma objetivo)
//{
//    Xf = objetivo.getX();
//    Yf = objetivo.getY();
//}

int Arma::disparar(Arma objetivo, float V0, int angulo)
{
    Proyectil bala(X, Y);
    bala.setRSensor(0.05*objetivo.getX());
    float Vx, Vy;

    Vx = V0*cos((angulo*pi)/180);

    for(float t=0; sqrt((pow((objetivo.getX()-bala.getX()), 2)+(pow((objetivo.getY()-bala.getY()), 2)))) > bala.getRSensor(); t+=0.1){
        Vy = V0*sin((angulo*pi)/180);

        bala.setX(X + Vx*t);
        bala.setY(Y + Vy*t - ((g*t*t)/2));

        if(bala.getY() <=0){
            cout << "no llego" << endl;
            return 0;
        }
    }
    return 1;
}

float Arma::getX() const
{
    return X;
}

float Arma::getY() const
{
    return Y;
}
