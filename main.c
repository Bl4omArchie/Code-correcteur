#include <stdio.h>
#include "includes/correction.h"
#include "includes/matrice.h"



int main() {
    struct Vecteur a = {.nombre=0b0010, .dimension=4};
    struct Vecteur b = {.nombre=0b1011, .dimension=4};
    struct Vecteur c = {.nombre=0b1001, .dimension=4};
    struct Vecteur d = {.nombre=0b1111, .dimension=4};

    struct Code code = {.dimension=4, .longueur=4, .tableau={a, b, c, d}};


    struct Matrice encoding_matrice = {.dimension=4, .length=4};
    struct Matrice control_matrice = {.dimension=4, .length=4};

    create_encoding_matrice(&code, &encoding_matrice);
    create_control_matrice(&code, &control_matrice);

    printf ("%d \n", distance_minimale(code));

    return 1;
}