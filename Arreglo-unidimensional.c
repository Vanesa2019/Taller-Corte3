#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//TAMAÑO DEL ARREGLO
#define SIZE 88

int main() {
    int arr[SIZE];
    int i, num, found = 0;

    //ARREGLO CON NÚMEROS SECUENCIALES DE 1 A 88
    for (i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }
    

    // Solicitar al usuario un número a buscar
    printf("Ingrese el número que desea buscar en el arreglo: ");
    scanf("%d", &num);

    // Buscar el número en el arreglo
    for (i = 0; i < SIZE; i++) {
        if (arr[i] == num) {
            printf("valor encontrado en la posición %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No encontrado\n");
    }

    return 0;
}
