#ifndef MATRICE_H
#define MATRICE_H

#include "../includes/correction.h"


typedef struct Element {
    int value;

    struct Element *prev;
    struct Element *next;
    struct Ligne *l;
    struct Colonne *c;
}Element;


typedef struct Ligne {
    int ligne;
    int colonne;
    struct Ligne *prev;
    struct Ligne *next;
}Ligne;


typedef struct Colonne {
    int ligne;
    int colonne;
    struct Ligne *prev;
    struct Ligne *next;
}Colonne;


//Matrice g
typedef struct Matrice {
    int dimension;
    int length;
    struct Ligne *first_ligne;
    struct Colonne *first_colonne; 
}Matrice;



void create_control_matrice(struct Code *c, struct Matrice *m);
void create_encoding_matrice(struct Code *c, struct Matrice *m) ;

#endif