#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(char argc, char *argv[])
{
    int p1 = fork();

    if (p1 < 0)
    {
        printf("Errore nella creazione della fork");
        exit(1);
    }

    if (p1 > 0)
    {
        printf("Processo padre; PID: %d; PID figlio: %d;\n", getpid(), p1);
    }
    else
    {
        printf("Sono Qui; PID: %d; PID padre: %d;\n", getpid(), getppid());
        exit(1);
    }

    int p2 = fork();
    if (p2 == 0)
    {
        printf("Sono Quo; PID: %d; PID padre: %d;\n", getpid(), getppid());
        exit(1);
    }

    int p3 = fork();
    if (p3 == 0)
    {
        printf("Sono Qua; PID: %d; PID padre: %d;\n", getpid(), getppid());
        exit(1);
    }

    return 0;
}