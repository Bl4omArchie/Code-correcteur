#include "../includes/correction.h"


int distance_hamming(struct Vecteur a, struct Vecteur b) {
    int result = a.nombre ^ b.nombre;
    int distance = 0;

    while (result > 0) {
        distance += result & 1;
        result >>= 1;
    }
    return distance;
}


int distance_minimale(struct Code code) {
    int distance_minimale = -1;
    int r;

    for (int i = 0; i < code.dimension; i++) {
        for (int j = i + 1; j < code.dimension; j++) {
            r = distance_hamming(code.tableau[i], code.tableau[j]);

            if (distance_minimale == -1 || r < distance_minimale) 
                distance_minimale = r;
        }
    }
    return distance_minimale;
}