#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sumatriz(int fila, int columna, int matrizA[fila][columna], int matrizB[fila][columna], int suma[fila][columna]) {//  creamos la funcion sumatriz la cuan incluyen todas las matrices A-B-suma y fila- columna 
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            suma[i][j] = matrizA[i][j] + matrizB[i][j];// hacemos dos bucle for en la cual se sumen los numeros aleatorios generados en la amtriz A y B, en la cual se proyecte en la amtriz "suma"
        }
    }
}

int main() {
    int fila, columna;
    int i, j;

    printf("Ingrese la dimension de la fila: "); //  pedimos al usuario que ingrese la dimension de la matriz en fila y columna 
    scanf("%d", &fila);
    printf("Ingrese la dimension de la columna: ");
    scanf("%d", &columna);

    int matrizA[fila][columna];
    int matrizB[fila][columna];
    int suma[fila][columna];

    srand(time(0));
    for (i = 0; i < fila; i++) {
        for (j = 0; j < columna; j++) {
            matrizA[i][j] = rand() % 101; // generamos numeros aleatorios entre 1-100 para la matriz A
            matrizB[i][j] = rand() % 101; // generamos numeros aleatorios entre 1-100 para la matriz B
        }
    }

    printf("\nLa MATRIZ 1 es:\n");
    for (i = 0; i < fila; i++) {
        for (j = 0; j < columna; j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nLa MATRIZ 2 es:\n");
    for (i = 0; i < fila; i++) {
        for (j = 0; j < columna; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}
