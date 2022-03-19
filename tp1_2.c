#include <stdio.h>

int cuadradoDelPrimerNumero(int *a);
void cuadradoDelSegundoNumero(int *b);
void mostrarDatosVariables(int *c);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);

int main(){
    int variable1, variable2, *pvar1, *pvar2, aux;

    printf("Ingrese el primer numero: \n");
    scanf("%d",&variable1);
    printf("Ingrese el segundo numero: \n");
    scanf("%d",&variable2);
    pvar1=&variable1;
    pvar2=&variable2;

    printf("---------- Funcion que devuelve el cuadrado de la variable1 ----------\n");
    aux = cuadradoDelPrimerNumero(pvar1);
    printf("El cuadrado del primer numero es: %d\n",aux);

    printf("---------- Funcion void que devuelve el cuadrado de la variable 2 ----------\n");
    cuadradoDelSegundoNumero(pvar2);

    printf("---------- Funcion que muestra los datos de la variable 1 ----------\n");
    mostrarDatosVariables(pvar1);

    printf("---------- Funcion que invierte los valores de la variable1 y variable2 ------------\n");
    invertir(pvar1,pvar2);

    printf("---------- Funcion que devuelve en la variable1 el valor mas chico y en la variable2 el valor mas grande ----------\n");
    ordenar(pvar1,pvar2);

    return 0;
}

int cuadradoDelPrimerNumero(int *a){
    int aux;
    aux = *a * *a;
    return aux;
}

void cuadradoDelSegundoNumero(int *b){
    printf("El cuadrado del segundo numero es: %d\n",*b * *b);
}

void mostrarDatosVariables(int *c){
    printf("Direccion de memoria de la variable 1: %d\n",c);
    printf("El contenido de la variable 1 es: %d\n",*c);
}

void invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    printf("El nuevo valor de a es: %d\n", *a);
    printf("El nuevo valor de b es: %d\n", *b);
}

void ordenar(int *a, int *b){
    int aux;
    if (*a > *b){
        printf("El nuevo valor de a es: %d\n",*b);
        printf("El nuevo valor de b es: %d\n",*a);
    } else{
        if (*a < *b){
            printf("El nuevo valor de a es: %d\n",*a);
            printf("El nuevo valor de b es: %d\n",*b);
        } else{
            printf("El orden de los numeros es el mismo ya que son iguales\n");
        }
        
    }
    
    
}