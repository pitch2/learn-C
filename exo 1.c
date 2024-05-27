#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
    int larg = 1;
    int haut = 1;

    repeat(5) {
        repeat(5) {
            printf("%d ", haut * larg); // Affiche la valeur suivie d'un espace
            larg = larg + 1;
        }
        larg = 1;
        printf("\n"); // Passe à la ligne après chaque boucle intérieure
        haut = haut + 1;
    }

    return 0;
}
