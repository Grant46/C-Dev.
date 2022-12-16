#include <stdio.h>
#include <math.h>

int main () {
    float a, dim, num;
    int valori;

    printf("\nInserisci un valore maggiore di zero: ");
    scanf(" %f", &a);

    if(a < 1) {
        printf("\nIl valore è minore di zero !");
    }

    else {
        dim = round(a);

        float V[(int)dim];

        for(int i=0; i<dim; i++) {
            printf("\nInserisci valore: ");
            scanf(" %f", &num);
            V[i] = num;
        }

        for(int i=0; i<dim; i++) {
            printf(" %1.1f", V[i], " ");
        }

    }
}
