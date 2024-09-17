#include <stdio.h>

int main(int argc, char *argv[])
{
    int x1, x2;
    double rapporto;
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
                rapporto = (double)x2 / (double)x1;
            }
            else
            {
                rapporto = (double)x1 / (double)x2;
            }

            printf("rapporto: %f\n", rapporto);
        }
        
    } while (x1 != 0 && x2 != 0);

    return 0;
}