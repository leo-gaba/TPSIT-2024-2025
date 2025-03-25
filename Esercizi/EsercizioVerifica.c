#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int LunghezzaStringa(char stringa[])
{
    return strlen(stringa);
}

void ContaVocali(char stringa[], int *v, int *s)
{
    for (int i = 0; i < strlen(stringa); i++)
    {
        char c = tolower(stringa[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            (*v)++;
        }
        if (c == ' ')
        {
            (*s)++;
        }
    }
}

int ContaConsonanti(char stringa[])
{
    int con = 0;

    for (int i = 0; i < strlen(stringa); i++)
    {
        char c = tolower(stringa[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != ' ')
        {
            con++;
        }
    }

    return con;
}

int contaCaratteri(char stringa[], char argv)
{
    int cont = 0;

    for (int i = 0; i < strlen(stringa); i++)
    {
        char c = tolower(stringa[i]);
        if (c == argv)
        {
            cont++;
        }
    }

    return cont;
}

int main(int argc, char *argv[])
{
    int vocali = 0, consonanti, lunghezzaStringa, spazi = 0, nLettera;
    if (argc != 3)
    {
        printf("Dati inseriti non sufficienti.\n");
        exit(0);
    }

    char stringa[strlen(argv[1]) + 1];
    char lettera=argv[2][0];
    strcpy(stringa, argv[1]);

    ContaVocali(stringa, &vocali, &spazi);
    consonanti = ContaConsonanti(stringa);
    lunghezzaStringa = LunghezzaStringa(stringa);
    nLettera = contaCaratteri(stringa, lettera);

    printf("La stringa è lunga %d caratteri\n", lunghezzaStringa);
    printf("Numero di vocali: %d\n", vocali);
    printf("Numero di spazi: %d\n", spazi);
    printf("Numero di consonanti: %d\n", consonanti);
    printf("La lettera %c è presente %d volte\n", lettera, nLettera);
    return 0;
}