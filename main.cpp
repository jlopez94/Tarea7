#include <iostream>
#include "nodo.h"

using namespace std;

int tamano;
Nodo* cartas;
int disponible;

void inicializar(int t)
{
	tamano = t;
	cartas = new Nodo[t];
	disponible = 0;

	for(int i = 0; i < t - 1; i++)
		cartas[i].siguiente = i+1;
	cartas[t - 1].siguiente = -1;
}

void agregar(Nodo nodo, int lista)
{
	if(lista >= 0 && lista < tamano)
	{
		while(cartas[lista].siguiente != -1)
			lista = cartas[lista].siguiente;

		int temporal = disponible;
		cartas[lista].siguiente = temporal;
		disponible = cartas[disponible].siguiente;
		cartas[temporal] = nodo;
	}
}

int main()
{
	inicializar(8);
	agregar(Nodo(2), 1);
	agregar(Nodo(4), 1);
    for(int i = 0; i < tamano; i++)
        cout << "[" << i << "]: "<< cartas[i].valor << "\t" << cartas[i].siguiente << endl;

	int a = 0;
	cartas[a].valor = 44;
    for(int i = 0; i < tamano; i++)
		cout << "[" << i << "]: " << cartas[i].valor << "\t" << cartas[i].siguiente << endl;
	return 0;
}
