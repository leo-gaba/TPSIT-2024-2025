#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])

{
    int n, i = 0, x;
    double somma = 0;

    do{
        printf("Inserisci un numero maggiore di 0: ");
        scanf("%d", &n);
    }while(n <= 0)

    do{
        printf("Inserisci un numero: ");
        scanf("%d")
        i++;

        if(x > 0)
        {
            somma+=sqrt(x);
        }else{
            break;
        }

    }while(n > i && x > 0);

    printf("il risultato della somma è: %f", somma);
    return 0;
}