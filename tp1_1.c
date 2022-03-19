#include <stdio.h>

int main(){
    int variable1 = 5, *pvar1;
    printf("Ingrese un numero: ");
    scanf("%d",&variable1);

    pvar1=&variable1;

    printf("El contenido del puntero es: %d\n",*pvar1);
    printf("La direccion de memoria almacenada por el puntero es: %d\n", pvar1);
    printf("Direccion de memoria de la variable: %d\n",&variable1);
    printf("Direccion de memoria del puntero: %d\n", pvar1);
    printf("Tamanio de memoria utilizado por la variable: %d\n", sizeof(pvar1));

    return 0;
}