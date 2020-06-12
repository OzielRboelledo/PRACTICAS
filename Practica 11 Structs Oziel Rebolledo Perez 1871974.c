#include <stdio.h>
#include <stdlib.h>
//ESTRUCTURA
struct DatsAlum{
char alumno[200];
char genero[50];
char birth[50];
char carrera[100];
char escuela[100];
int semestre;
}regs[200];



int main(){
int opc=0,i=0,opc2=0,conta=0,j=0;
char strin[20];
do{
  fflush(stdin);
  printf("Ingrese Nombre Completo del Alumno\n");
  gets(regs[i].alumno);
    do{
      fflush(stdin);
      printf("Genero del Alumno,Masculino o Femenino\n");
      gets(regs[i].genero);
      strlwr(regs[i].genero);
      strcpy(strin,regs[i].genero);
      if(strcmp(strin,"masculino")==0 || strcmp(strin,"femenino")==0){
         opc2=0;
      }else{
        printf("Genero invalido\n");}
    }while(opc2!=0);
fflush(stdin);
printf("Ingrese Carrera que Cursa Actualmente\n");
gets(regs[i].carrera);
fflush(stdin);
printf("Ingrese Nombre de la Escuela\n");
gets(regs[i].escuela);
fflush(stdin);
printf("Ingrese Fecha de Nacimiento dd-mm-aa\n");
gets(regs[i].birth);
fflush(stdin);
printf("Ingrese Semestre que Cursa Actualemte\n");
scanf("%d",&regs[i].semestre);
j++;
i++;
printf("Desea Ingresar otro Alumno?\n1->Si\t2->No");
scanf("%d",&opc);
}while(opc!=2);
system("cls");
conta=j;
puts("Registro Alumno\n");
for(i=0;i<conta;i++){
puts(regs[i].alumno);
printf("Genero: %s\n",regs[i].genero);
printf("Carrea: %s\n",regs[i].carrera);
printf("Escuela: %s\n",regs[i].escuela);
printf("Fecha de Nacimiento: %s\n",regs[i].birth);
printf("Semestre: %d\n\n",regs[i].semestre);
}
}
