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
Une Matrice permet de représenter un Code sous une forme différente (forme matricielle). Elle permet de faire des calculs plus aisement dessus. Je travail encore sur cette partie.

## Compilation

```bash
make
./code.o
```

# Sources

- [Codes Correcteurs d’Erreurs Cours 1 - Introduction, Codes linéaires en bloc](https://www.lirmm.fr/~chaumont/download/cours/codescorrecteur/01_codes_correcteurs_d%27erreurs_1_transparent_par_page.pdf) par Marc Chaumont, 2008