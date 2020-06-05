#include <stdio.h>
#include <stdlib.h>

int main(){
int matriz[3][3];
int matriz2[3][3];
int matriz3[3][3];
int i=0,j=0;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        matriz[i][j]=0;
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        matriz2[i][j]=0;
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        matriz2[i][j]=0;
    }
}
printf("Introduzca los Numeros de la Primera Matriz\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Introduza el numero\n");
        scanf("%d",matriz[i][j]);
    }
}
system("cls");
printf("Introduzca los Numeros de la Segunda Matriz\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Introduza el numero\n");
        scanf("%d",matriz2[i][j]);
    }
}
system("cls");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        matriz3[i][j]= matriz[i][j]*matriz2[i][j];
    }
}
printf("%d\t%d\t%d\n",matriz3[0][0],matriz3[0][1],matriz3[0][2]);
printf("%d\t%d\t%d\n",matriz3[1][0],matriz3[1][1],matriz3[1][2]);
printf("%d\t%d\t%d\n",matriz3[2][0],matriz3[2][1],matriz3[2][2]);
}
