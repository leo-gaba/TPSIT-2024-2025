#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Errore nell'inserimento degli argomenti\n");
        exit(1);
    }

    int p1p2[2];
    int p;

    pipe(p1p2);

    p = fork();

    if (p == 0)
    {
        close(p1p2[0]);
        close(1);

        dup(p1p2[1]);
        close(p1p2[1]);

        execl("/bin/cat", "cat", argv[1], (char *)0);
        return -1;
    }

    p = fork();

    if (p == 0)
    {
        close(p1p2[1]);
        close(0);

        dup(p1p2[0]);
        close(p1p2[0]);

        execl("/bin/more", "more", (char *)0);
        return -1;
    }

    close(p1p2[1]);
    close(p1p2[0]);

    wait(&p);
    wait(&p);

    return 0;
}