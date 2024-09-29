#include <stdio.h>

int main(int agrc, char *argv[])
{
    int x;

    do
    {
        printf("Inserisci numero: ");
        scanf("%d", &x);
    } while (x <= 0);

    printf("Il numero successivo è %d\n", x + 1);

    return 0;
}