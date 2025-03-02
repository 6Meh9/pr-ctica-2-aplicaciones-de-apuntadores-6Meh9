// 7. Accediendo a la Memoria
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    // Código para imprimir direcciones de memoria aquí
    for (int i=0;i<5;i++){
        printf("la direccion de memoria del elemento %i es: %p \n", arr[i], &arr[i]);
    }
    return 0;
}
