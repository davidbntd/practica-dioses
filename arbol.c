//
// Created by d.benitez.2025 on 16/04/2026.
//

#include "arbol.h"

#include <stddef.h>
#include <stdlib.h>

#include "elemento.h"
void arbolvacio(tarbol* arbol) {
    *arbol=NULL;
}

void construir(tarbol* ta, tarbol izq, tarbol der, telemento elemento) {
    *ta = (tarbol)malloc(sizeof(tnodo));
    asignarElemento(&((*ta)->elemento), elemento);
    (*ta)->izq=izq;
    (*ta)->der=der;

}
int existe (tarbol ta, char nombre[100]) {
    if (ta==NULL) {return 0;}
        if (compararElemento (nombre, ta->elemento)) {
            return 1;
        } else {
            return  (existe (ta->izq,nombre)||  existe (ta->der,nombre));
        }



}

int padreomadre(tarbol ta, char nombre[100],char nombre2[100]) {


    if (ta==NULL) {return 0;}

    if (compararElemento (nombre, ta->elemento)) {
            if ((ta->izq !=NULL && compararElemento (nombre2, ta->der->elemento))||( compararElemento (nombre2, ta->izq->elemento)&&ta->der!=NULL)) {
                return 1;
            }
        return 0;
        }
        return  (padreomadre (ta->izq,nombre,nombre2)||  padreomadre (ta->der,nombre,nombre2));



}
void imprimirpreorden(tarbol ta) {
    if (ta!=NULL) {
        mostrarElemento(ta->elemento);
        imprimirpreorden(ta->izq);
        imprimirpreorden(ta->der);
    }
}
