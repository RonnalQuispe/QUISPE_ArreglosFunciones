#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Ingrese las dimensiones del arreglo tridimensional:\n"); // pedimos al usuario dimesiones de la matriz
    printf("Primera dimension:");
    scanf("%d", &x);
    printf("Segunda dimension:");
    scanf("%d", &y);
    printf("Tercera dimension:");
    scanf("%d", &z);
    int tresD[x][y][z];

    // Inicializar todas las matrices en 0
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                tresD[i][j][k] = 0;
            }
        }
    }
    // Inicializar la ultima matriz en unos
    for (int j = 0; j < y; j++)
    {
        for (int k = 0; k < z; k++)
        {
            tresD[x - 1][j][k] = 1;
        }
    }
    // Imprimir todos los elementos de la matriz 3d
    printf("Elementos del arreglo tridimensional:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                printf("%d ", tresD[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
