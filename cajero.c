#include <stdio.h>}

int main(void){
    int monto;
    int igual = 0;
    int diferencia = 0;
    int b1=0, b5=0,b10=0,b20=0, b50=0, b100=0;

    printf("Ingrese un monto a retirar entre 20 - 5000: ");
    scanf("%d", &monto);
    diferencia = monto;

    if(monto<20){
        printf("Monto ingresado no valido, por favor ingrese un monto valido");

        return 1;
    }
    
    if(monto>5000){
        printf("Monto ingresado no valido, por favor ingrese un monto valido");

        return 2;
    }

    while (diferencia >= 100){

        igual = igual + 100;
        diferencia = monto - igual;
        b100++;
    }

    while (diferencia >= 50){

        igual = igual + 50;
        diferencia = monto - igual;
        b50++;
    }

    while (diferencia >= 20){

        igual = igual + 20;
        diferencia = monto - igual;
        b20++;
    }

    while (diferencia >= 10){

        igual = igual + 10;
        diferencia = monto - igual;
        b10++;
    }

    while (diferencia >= 5){

        igual = igual + 5;
        diferencia = monto - igual;
        b5++;

    }

    while (diferencia >= 1){

        igual = igual + 1;
        diferencia = monto - igual;
        b1++;
    }

    printf("Se entregaran: \n");
    printf("Billetes de 1: %d\n",b1);
    printf("Billetes de 5: %d\n",b5); 
    printf("Billetes de 10: %d\n",b10);
    printf("Billetes de 20: %d\n",b20);
    printf("Billetes de 50: %d\n",b50);
    printf("Billetes de 100: %d\n",b100);
}