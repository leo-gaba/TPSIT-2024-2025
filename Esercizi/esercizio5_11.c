#include <stdio.h>

int main(int agrc, char *argv[])
{
    int x, y, i;

    do
    {
        printf("Inserisci il primo numero: ");
        scanf("%d", &x);

        printf("Inserisci il primo numero: ");
        scanf("%d", &y);
    } while (x < y);

    i = x+1;
    
    do
    {    
        printf("%d\n", i);
        i++;
    } while (i < y);

    return 0;
}