#include <stdio.h>

int main(int argc, char *argv[])
{
    int x1, x2;
    int prodotto, somma = 0;
    do
    {
        printf("Inserisci il primo numero: ");
        scanf("%d", &x1);

        printf("Inserisci il secondo numero: ");
        scanf("%d", &x2);

        if (x1 != 0 && x2 != 0)
        {
            prodotto = x1 * x2;
            printf("Il prodotto dei due numeri è: %d\n", prodotto);
            somma += prodotto;
        }

    } while (x1 != 0 && x2 != 0);

    printf("La somma è: %d", somma);
    
    return 0;
}