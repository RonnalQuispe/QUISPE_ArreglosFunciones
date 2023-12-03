#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int fila, columna;
    int i, j;

    printf("ingrese la dimension de la fila:");
    scanf("%d", &fila);
    printf("ingrese la dimension de la columna:");
    scanf("%d", &columna);
    int matrizA[fila][columna];
    int matrizB[fila][columna];
    int suma[fila][columna];
    srand(time(0));
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            matrizA[i][j] = rand() % 101; // generamos numeros aleatorios entre 1-100 para la matriz A
            matrizB[i][j] = rand() % 101; // generamos numeros aleatorios entre 1-100 para la matriz B
        }
    }
    printf("\n");
    printf("La MATRIZ  1 es:\n");
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("%d ", matrizA[i][j]); // imprimimos la Fila y columna de la matriz A
        }
        printf("\n");
    }
    printf("\n");
    printf("la MATRIZ 2 es\n");
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("%d ", matrizB[i][j]); // imprimimos la Fila y columna de la matriz A
        }
        printf("\n");
    }
    for (i = 0; i < fila; i++) // suma matriz
    {
        for (j = 0; j < columna; j++)
        {
            suma[i][j] = matrizA[i][j] + matrizB[i][j]; // realizamos la suma de la matrizA y matriz B en la matriz "suma"
        }
    }

    printf("\n");
    printf("la suma de matriz 1 y matriz2  es:\n");
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("%d ", suma[i][j]); // se imprime la matriz "suma"
        }
        printf("\n");  //salto de linea
    }
    return 0;
}