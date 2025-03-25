#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(char argc, char *argv[])
{
    int p = fork();

    if (p < 0)
    {
        printf("Errore nella creazione della fork");
        exit(1);
    }

    if (p > 0)
    {
        printf("Processo padre; PID: %d; PID figlio: %d;\n", getpid(), p);
        for (int i = 0; i < 10; i++)
        {
            printf("padre: %d\n", i);
        }
    }
    else
    {
        printf("Processo figlio; PID: %d; PID padre: %d;\n", getpid(), getppid());
        for (int i = 0; i < 20; i++)
        {
            printf("figlio: %d\n", i);
        }
        exit(1);
    }
    return 0;
}