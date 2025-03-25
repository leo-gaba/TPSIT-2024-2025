#include <stdio.h>

int main(int argc, char *argv[])
{
    int x1, x2, x3, differenza;
    int pari = 0, dispari = 0, nullo = 0;
    do
    {
        printf("Inserisci il primo numero: ");
        scanf("%d", &x1);

        printf("Inserisci il secondo numero: ");
        scanf("%d", &x2);

        printf("Inserisci il terzo numero: ");
        scanf("%d", &x3);

        if (x1 + x2 >= x3)
        {
            differenza = x1 - x2;
            if (differenza == 0)
            {
                nullo++;
            }
            else if (differenza % 2 == 0)
            {
                pari++;
            }
            else
            {
                dispari++;
            }
        }

    } while (x1 + x2 >= x3);

    printf("La differenza tra il primo e il secondo numero è risultata pari %d volte\n", pari);
    printf("La differenza tra il primo e il secondo numero è risultata dispari %d volte\n", dispari);
    printf("La differenza tra il primo e il secondo numero è risultata nulla %d volte\n", nullo);

    return 0;
}