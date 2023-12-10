# Code correcteur

J'ai codé ces programmes lors de mes TD de cryptographie. Un long chapitre était dédié aux codes correcteurs d'erreurs.
J'ai alors eu envi d'implémenter ces codes correcteurs en C grâce et les algorithmes de bases (ex: Distance de Hamming).

# Tutoriel

## Code correcteur
Un Code est un assemblement de Vecteurs. Ces vecteurs représentent un mot qui possède une dimension, c'est à dire le nombre de bits.
```c
struct Vecteur a = {.nombre=0b0010, .dimension=4};
struct Vecteur b = {.nombre=0b1011, .dimension=4};
struct Vecteur c = {.nombre=0b1001, .dimension=4};
struct Vecteur d = {.nombre=0b1111, .dimension=4};

struct Code code = {.dimension=4, .longueur=4, .tableau={a, b, c, d}};
```

Dans ma structure Code, j'indique la dimension (nombre de bits dans un mot), la longueur (le nombre de mots) et enfin un tableau avec tous les Vecteurs créés auparavant. 

## Matrice
Une matrice se définit par un nombre de colonnes et de lignes. Dans cette structure j'utilise le même système que les listes chaînées, c'est à dire qu'une struct ligne va pointer sur la ligne suivante et ainsi de suite, et de même pour les colonnes. Cela permet de gérer et accéder facilement aux valeurs contenues dans ma matrice. 
```c
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

typedef struct Matrice {
    int nb_columns;
    int nb_lignes;
    struct Ligne *first_ligne;
    struct Colonne *first_colonne; 
}Matrice;
```

Je définis ensuite un élément qui contient une valeur et qui se définit par sa ligne et sa colonne. Pour l'instant le type de valeur n'est pas générique et restera un integer.
```c
typedef struct Element {
    int value;

    struct Element *prev;
    struct Element *next;
    struct Ligne *l;
    struct Colonne *c;
}Element;
```
Ces structures qui constitue une matrice vont me permettre d'encoder des messages sur des codes correcteurs linéaires.

## Compilation

```bash
make
./code.o
```

# Sources

- [Codes Correcteurs d’Erreurs Cours 1 - Introduction, Codes linéaires en bloc](https://www.lirmm.fr/~chaumont/download/cours/codescorrecteur/01_codes_correcteurs_d%27erreurs_1_transparent_par_page.pdf) par Marc Chaumont, 2008