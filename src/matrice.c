#include "../includes/matrice.h"


void create_control_matrice(struct Code *c, struct Matrice *m) {

}

void create_encoding_matrice(struct Code *c, struct Matrice *m) {

}

int add_matrice(struct Matrice *res, struct Matrice *a, struct Matrice *b) {
    if (a->nb_columns != b->nb_lignes)
        return -1;

}

int mult_matrice(struct Matrice *res, struct Matrice *a, struct Matrice *b) {
    if (a->nb_columns != b->nb_lignes)
        return -1;
}