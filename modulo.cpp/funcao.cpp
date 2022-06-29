#include <iostream>

using namespace std;
double modulo(double x)
{
    if (x >= 0)
    {
        return x;
    }
    else
    {
        return x * (-1);
    }
}

double soma(double a, double b)
{
    return a + b;
}

double subtracao(double a, double b)
{
    return a - b;
}

double multiplicacao(double a, double b)
{
    return a * b;
}

double divisao(double a, double b)
{
    return a / b;
}
