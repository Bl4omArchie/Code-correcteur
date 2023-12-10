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
    int num_ligne;
    struct Ligne *prev;
    struct Ligne *next;
}Ligne;


typedef struct Colonne {
    int num_col;
    struct Ligne *prev;
    struct Ligne *next;
}Colonne;


//Matrice g
typedef struct Matrice {
    int nb_columns;
    int nb_lignes;
    struct Ligne *first_ligne;
    struct Colonne *first_colonne; 
}Matrice;



void create_control_matrice(struct Code *c, struct Matrice *m);
void create_encoding_matrice(struct Code *c, struct Matrice *m);

int add_matrice(struct Matrice *res, struct Matrice *a, struct Matrice *b);
int mult_matrice(struct Matrice *res, struct Matrice *a, struct Matrice *b);

#endif