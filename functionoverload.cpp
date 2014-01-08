#include <iostream>

using namespace std;

class A
{
    double numero;
public:
    A(double m_numero) : numero(m_numero){}  //constructor
    double &obtener_numero(){return numero;}

asdkfhskjfahdjkshkjhkjhjkhkj
};

class B
{
    int numero;
public:
    B(int m_numero) : numero(m_numero){} //constructor
    int obtener_numero(){return numero;}
};
/*
double operator+(A &oA, B &oB)
{
    double resultado = oA.obtener_numero ()+ oB.obtener_numero ();
    return resultado;
} */

istream &operator >>(istream &i , A oA)
{
    i >> oA.obtener_numero ();
    return i;
}
int main()
{
    A oA(3.4);
    cin>>oA;
    B oB(5);
    double resultado = oA.obtener_numero ()+ oB.obtener_numero ();
    cout<<resultado<<endl;

    cout<<oA.obtener_numero ()<<endl;
    return 0;
}

