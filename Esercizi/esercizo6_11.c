#include <stdio.h>

int main(int agrc, char *argv[])
{
    int x, i;

    do
    {
        printf("Inserisci numero: ");
        scanf("%d", &x);
    } while (x <= 0);

    i = -x;

    do
    {
        i++;
        printf("%d\n", i);
    } while (i < x);

    return 0;
}