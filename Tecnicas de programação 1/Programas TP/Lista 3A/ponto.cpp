#include "ponto.h"
#include <math.h>
void Ponto::set_x(float xx)
{
    x=xx;
}

float Ponto::get_x()
{
    return y;
}

void Ponto::set_y(float yy)
{
    y=yy;
}

float Ponto::get_y()
{
    return x;
}

Ponto::Ponto()
{
    x=y=0.0;
}

float Triangulo::lado_AB()
{
    float xzin=A.get_x()-B.get_x();
    float yzin=A.get_y()-B.get_y();

    xzin=xzin*xzin;
    yzin=yzin*yzin;

    return sqrt(xzin+yzin);
}

float Triangulo::lado_AC()
{
    float xzin=A.get_x()-C.get_x();
    float yzin=A.get_y()-C.get_y();

    xzin=xzin*xzin;
    yzin=yzin*yzin;

    return sqrt(xzin+yzin);
}

float Triangulo::lado_BC()
{
    float xzin=B.get_x()-C.get_x();
    float yzin=B.get_y()-C.get_y();

    xzin=xzin*xzin;
    yzin=yzin*yzin;

    return sqrt(xzin+yzin);
}

int Triangulo::tipo_triangulo()
{
    float ab=lado_AB();
    float ac=lado_AC();
    float bc=lado_BC();
    if (ab==0 or ac==0 or bc==0)
    {//nao forma
        return -1;
    }
    if (ab==ac and ab==bc)
    {//equilatero
        return 1;
    }
    if (ab!=ac and ab!=bc and bc!=ac)
    {//escaleno
        return 3;
    }
    //isosceles
    if (ab==ac)
    {
        if (ab!=bc)
        {
            return 2;
        }
    }
    if (ab==bc)
    {
        if (ab!=ac)
        {
            return 2;
        }
    }
    if (ac==bc)
    {
        if (ac!=ab)
        {
            return 2;
        }
    }
    return 0; //nao funcionou kkkk
}

Triangulo::Triangulo(float ax, float ay, float bx, float by, float cx, float cy)
{
    A.set_x(ax);
    A.set_y(ay);
    B.set_x(bx);
    B.set_y(by);
    C.set_x(cx);
    C.set_y(cy);
}

