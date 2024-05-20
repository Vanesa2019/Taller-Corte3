#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//TAMAÑO DE LA MATRIZ 
#define ROWS 9
#define COLS 9

//VARIABLES
int main() {
    int matrix[ROWS][COLS];
    int i, j, num, found = 0;

    srand(time(0));

    // Llenar la matriz con números aleatorios entre 0 y 99
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    // Imprimir la matriz generada
    printf("Matriz generada:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Solicitar al usuario un número a buscar
    printf("Ingrese el número que desea buscar en la matriz: ");
    scanf("%d", &num);

    // Buscar el número en la matriz
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (matrix[i][j] == num) {
                printf("Valor encontrado en la posicion (%d, %d)\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("No encontrado\n");
    }

    return 0;
}
