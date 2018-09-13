#include <iostream>
#include "arbol.h"
#include "nodo.h"
using namespace std;

int main()
{
    cout<<"Arbol Binario de Busqueda"<<endl;
    cout<<"Christian Alexis Ibanez Arriola 201503475"<<endl;
    ArbolBinario ab;
    id n1,n2,n3,n4,n5,n6,n7,n8,n9;
    n1.num = 2;
    n2.num = 0;
    n3.num = 1;
    n4.num = 5;
    n5.num = 0;
    n6.num = 3;
    n7.num = 4;
    n8.num = 7;
    n9.num = 5;
    ab.insertar(n1);
    ab.insertar(n2);
    ab.insertar(n3);
    ab.insertar(n4);
    ab.insertar(n5);
    ab.insertar(n6);
    ab.insertar(n7);
    ab.insertar(n8);
    ab.insertar(n9);

    ab.recorrido(ab.raiz);
    ab.graficar(ab.raiz);

    return 0;
}
