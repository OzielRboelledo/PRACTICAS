#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int opc=0,i=0,opc2=0,conta=0;
char strin[20];
char alumno[100][200];
char sexo[100][50];
char carrera[100][100];
char school[100][100];
char birth[100][100];
int semestre[100];

do{
printf("Ingrese Nombre Completo del Alumno\n");
gets(alumno);
do{
fflush(stdin);
printf("Genero del Alumno,Masculino o Femenino\n");
gets(sexo[i]);
strlwr(sexo[i]);
strcpy(strin,sexo[i]);
if(strcmp(strin,"masculino")==0 || strcmp(strin,"femenino")==0){
opc2=0;
}else{
printf("Genero invalido\n");}
}while(opc2!=0);
fflush(stdin);
printf("Ingrese Carrera que Cursa Actualmente\n");
gets(carrera[i]);
fflush(stdin);
printf("Ingrese Nombre de la Escuela\n");
gets(school[i]);
fflush(stdin);
printf("Ingrese Fecha de Nacimiento dd-mm-aa\n");
gets(birth[i]);
fflush(stdin);
printf("Ingrese Semestre que Cursa Actualemte\n");
scanf("%d",&semestre[i]);
i++;
printf("Desea Ingresar otro Alumno?\n1->Si\t2->No");
scanf("%d",&opc);
}while(opc!=2);
system("cls");
conta=i;
puts("Registro Alumno\n");
for(i=0;i<conta;i++){
puts(alumno[i]);
printf("Genero: %s\n",sexo[i]);
printf("Carrea: %s\n",carrera[i]);
printf("Escuela: %s\n",school[i]);
printf("Fecha de Nacimiento: %s\n",birth[i]);
printf("Semestre: %d\n\n",semestre[i]);
}
}
