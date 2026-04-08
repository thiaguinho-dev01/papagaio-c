#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        printf("Voce não digitou nada\n");
        exit(0);
    }

    printf("Voce digitou %s\n", argv[1]);

    printf("Feito por Thiago Bonfanti");

    return 0;
}