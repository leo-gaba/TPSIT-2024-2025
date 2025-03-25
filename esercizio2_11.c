#include <stdio.h>

int main(int agrc, char *argv[])
{
    int x, i = 0;

    do
    {
        printf("Inserisci numero: ");
        scanf("%d", &x);
    } while (x <= 0);

    do
    {
        i++;
        printf("%d\n", i);
    } while (i < x);

    return 0;
}