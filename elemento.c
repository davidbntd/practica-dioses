//
// Created by d.benitez.2025 on 17/04/2026.
//

#include "elemento.h"
//
// Created by d.benitez.2025 on 16/04/2026.
//

#include "elemento.h"
#include <stdio.h>
#include <string.h>
void mostrarElemento(telemento e) {
    printf("%s\n", e);


}
void asignarElemento(telemento *e,telemento origen) {
    strcpy(*e,origen);
}
void crearElemento (telemento* pe) {
    printf("Introduzca un nombre");
    fgets(*(pe),100,stdin);
    fflush(stdin);}

int compararElemento (telemento e1, telemento e2) {
    if (strcmp(e1,e2)==0) {return 1;}
    else {return 0;}
}
