#include <stdio.h>

int main(int argc, char *argv[])
{
    int x1, x2, n, somma = 0, i = 0;
    double media;

    do
    {
        printf("Inserisci il primo numero: ");
        scanf("%d", &x1);

        printf("Inserisci il secondo numero: ");
        scanf("%d", &x2);

    } while (x1 < x2);

    do
    {
        printf("Inserisci un numero: ");
        scanf("%d", &n);

        if (n >= x1 && n <= x2)
        {
            somma += n;
            i++;
        }
    } while (x1 >= n && n <= x2);

    media = (double)somma / (double)i;
    printf("La media dei numeri inseriti è: %f\n", media);

    return 0;
}