#ifndef CORRECTION_H
#define CORRECTION_H

#include <stdio.h>


struct Vecteur {
    int nombre;
    int dimension;
};

struct Code {
    struct Vecteur tableau[100];
    int dimension;              //k: nombre de mots (ou u)
    int longueur;               //n
};


int distance_hamming(struct Vecteur a, struct Vecteur b);
int distance_minimale(struct Code code);


#endif