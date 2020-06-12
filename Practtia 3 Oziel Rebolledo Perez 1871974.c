#include<stdio.h>
#include<stdlib.h>
int main()
{
	char d;
	printf("Ingrese Caracter: ");
	d = getchar();
	int p=(int) d;
	if (48<=d && d<=57){
			printf("Es un numero\n\n");
	}else{
		if(65<=d && d<=90){
				printf("Es mayuscula\n\n");
		}else{
			if(97<=d && d<=122){
				printf("Es minuscula\n\n");
			}
			else{
				printf("Es un simbolo\n\n");
			}	
		}		
	} 
	system("pause");
	return 0;
}
