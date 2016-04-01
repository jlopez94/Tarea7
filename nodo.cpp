#include "nodo.h"

Nodo::Nodo()
{
    valor = 0;
    siguiente = -1;
}

Nodo::Nodo(int valor) {
	this->valor = valor;
	siguiente = -1;
}

Nodo::~Nodo()
{
    //dtor
}
