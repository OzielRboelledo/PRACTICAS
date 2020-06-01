#include <stdio.h>

int main(){
int opc=0;
float suma=0,resta=0,div=0,multi=0,num1=0,num2=0;
pritnf("Ingrese el primer numero\n");
scanf("%f",num1);
pritnf("Ingrese el segundo numero\n");
scanf("%f",num2);
printf("Teclee la Operacion que Dease Hacer\n1)Suma\n2)Resta\n3)Division\n4)Multiplicacion");
scanf("%d",opc);
switch(opc){
case 1: suma= num1 + num2;
printf("El resultado de la suma: %.2f",suma);
break;
case 2: resta=num1-num2;
printf("El resultado de la resa: %.2f",resta);
break;
case 3: div=num1/num2;
printf("El resultado de la division: %.2f",div);
break;
case 4: multi=num1*num2;
printf("El resultado de la multiplicacion: %.2f",multi);
break;
default: printf("error");
}
return 0;
}
