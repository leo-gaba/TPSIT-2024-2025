#include <stdio.h>
#include <math.h> //per far andare le funzioni di math.h bisogna compilare con:"gcc nomeprog.c -o nome prog -lm"

int main(int argc, char *argv[])
{
    int x1, x2;
    double rapporto, radice;
    do
    {
        printf("Inserisci il primo numero: ");
        scanf("%d", &x1);

        printf("Inserisci il secondo numero: ");
        scanf("%d", &x2);

        if (x1 != 0 && x2 != 0)
        {
            if (x1 > x2)
            {
                rapporto = (double)x1 / (double)x2;
            }
            else
            {
                rapporto = (double)x2 / (double)x1;
            }

            if (rapporto > 0)
            {
                radice = sqrt(rapporto);
                printf("la radice quadrata del rapporto è: %f\n", radice);
            }
        }

    } while (rapporto>0);
    printf("il risultato del rapporto deve essere superiore a 0, programma terminato\n");
    return 0;
}