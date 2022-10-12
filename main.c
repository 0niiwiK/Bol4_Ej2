#include <stdio.h>

int main() {
    int contador=0;
    float num,acumulado=0;
    do {
        printf("Introduce un valor: ");
        scanf("%f",&num);
        if (num!=0){
            acumulado=acumulado+num;
            contador++;
        }
    } while (num!=0);
    if (contador==0)
        printf("El promedio es 0 (no se cargo ningun valor)");
    else {
        printf("El promedio de los %d valores es: %f",contador,acumulado/contador);
    }
    return 0;
}
