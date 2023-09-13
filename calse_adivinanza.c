#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int jugador, intentos = 1, aleatorio;
    int jugar;
    aleatorio = (rand() % 100) + 1;

    printf("BIENVENIDO\n");
    printf("INTENTA ADIVINAR EL NUMERO ALEATORIO\n");
inicio:
    intentos=0;
intento:
    printf("Adivina el numero aleatorio\n");
    scanf("%d", &jugador);
    if (jugador < aleatorio)
    {
        intentos++;
        printf("El numero es mayor\n");
        goto intento;
    }
    if (jugador > aleatorio)
    {
        intentos++;
        printf("El numero es menor\n");
        goto intento;
    }
    if (jugador == aleatorio)
    {
        printf("FELICIDADES\nintentos:%d", intentos);
        goto final;
    }
final:
    printf("\nDesea jugar de nuevo \n1: Si  \n2: No).\n");
    scanf("%d", &jugar);

    if (jugar == 1)
    {
        goto inicio;
    }
    if (jugar == 2)
    {
        printf("Gracias por jugar");
        return 0;
    }
    else
    {
        printf("INGRESA UNA OBCION VALIDA");
        goto final;
    }
    return 0;
}