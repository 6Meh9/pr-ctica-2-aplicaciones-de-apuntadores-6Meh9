// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tamaño; i++) {
        if (*(arr + i) == valor) {
            return (arr + i);
        }
    }

    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    int tamaño = 5;
    int valor;
    
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &valor);
    
    int *dir = buscarElemento(arr, tamaño, valor);
    
    if (dir != NULL) {
        printf("El numero %d esta en la direccion de memoria: %p \n", valor, (void *)dir);
    } else {
        printf("El numero %d no esta en el arreglo \n", valor);
    }
    return 0;
}
