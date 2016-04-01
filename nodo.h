#ifndef NODO_H
#define NODO_H


class Nodo
{
    public:
        int valor;
        int siguiente;
        Nodo(int valor);
        Nodo();
        virtual ~Nodo();
};

#endif // NODO_H
