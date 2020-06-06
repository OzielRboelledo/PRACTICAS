#include<stdio.h>
#include<stdlib.h>

int main(){
int arreglo[100];

int num=0,opc=0,i=0,p=0,contador=0,j=0;
for(i=0;i<100;i++){
    arreglo[i]=0;
}
do{
    printf("Ingrese un numero mayor que cero y menor que 100\n");
    scanf("%d",&num);
    if(0<num<=100){
        opc=1;
    }
    else{
            printf("Numero no valido, ingrese otro\n");
    }
}while(opc!=1);

for(i=2;i<=num;i++){
    for(j=2;j<=i;j++){
        if(i%j==0){
            contador++;
        }
        if(contador==1){
        arreglo[p]=0;
        arreglo[p]=i;
        contador=0;
        p++;
        }
    }
    }
printf("Numero Primos menores iguales que %d\n",num);
for(i=0;i<=p;i++){
    printf("%d",arreglo[i]);
}
}

