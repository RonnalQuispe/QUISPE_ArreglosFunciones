#include <stdio.h>

void inicializarMatriz(int x, int y, int z, int tresD[x][y][z]) {
    // Inicializar todas las matrices en 0
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                tresD[i][j][k] = 0;
            }
        }
    }
    // Inicializar la ultima matriz en unos
    for (int j = 0; j < y; j++) {
        for (int k = 0; k < z; k++) {
            tresD[x - 1][j][k] = 1;// "x-1" es la ultima matriz y esa se inicializa en 1
        }
    }



}



int main() {
    int x, y, z;
    printf("Ingrese las dimensiones del arreglo tridimensional:\n");
    printf("Primera dimension:");// pdimos al usuario que ingrese la dimension de la matriz 3D
    scanf("%d", &x);
    printf("Segunda dimension:");
    scanf("%d", &y);
    printf("Tercera dimension:");
    scanf("%d", &z);
    int tresD[x][y][z];

    inicializarMatriz(x, y, z, tresD);
    imprimirMatriz(x, y, z, tresD);

    return 0;
}
