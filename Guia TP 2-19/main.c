#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Variables
    float salario = 0;
    float salarioFinal = 0;
    float salarioConAumento = 0;
    float aumento = 0;
    float descuentoPorServicios = 0;

    //Entrada salario
    printf("Ingrese su salario actual \n");
    scanf("%f", &salario);

    //Proceso
    aumento = salario * 0.08;
    salarioConAumento = (salario * 0.08) + salario;
    salarioFinal = salarioConAumento - (salarioConAumento * 0.025);
    descuentoPorServicios = salarioConAumento * 0.025;
    //Hay otra alternativa de menos lineas pero me gusto esta para imprimir cuanto tuvo de aumento y cuanto de descuento
    //aunque el ejercicio no lo pedia....gato! me voy a dormir que son las 1:48 am y me quede retocando esto ! abrazo !

    //Salida
    printf("Su nuevo salario es de $%.2f pesos\n", salarioFinal);
    printf("Tuvo un aumento de $%g\n",aumento);
    printf("Tuvo un descuento de $%g por servicios", descuentoPorServicios);

    return 0;
}
