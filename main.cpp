/* programa_22 Imprimir los numeros del 0 al 9
estructura: ciclica
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 03 de marzo del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;
    x=0;
    cout<<"\n Programa que imprime los numeros del 0 al 9";
    cout<<"\n\n Estrucutra de control do while\n\n";
    do
        {
        cout<<"\n "<<x;
        x=x+1;
        }
    while (x<=9);
        cout<<"\n\n Presione enter para salir...\n\n";
        system ("pause");

    return 0;
}

