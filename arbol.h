//
// Created by d.benitez.2025 on 16/04/2026.
//

#ifndef ARBOL_H
#define ARBOL_H
#include "elemento.h"

typedef struct nodo {
    telemento elemento;
    struct nodo *izq, *der;

}tnodo;

typedef tnodo* tarbol;

void arbolvacio(tarbol* arbol);
void construir(tarbol* ta, tarbol izq, tarbol der, telemento elemento);
int existe (tarbol ta, char nombre[100]);
int padreomadre(tarbol ta, char nombre[100],char nombre2[100]);
void imprimirpreorden(tarbol ta);
#endif //ARBOL_H
