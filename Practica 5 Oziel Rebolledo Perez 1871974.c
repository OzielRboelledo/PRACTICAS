#include<stdio.h>
int main(){
	int n=0,num=0,sum=0,contador=0;
	float prom=0;
	while(contador>0){
	num=0;
	printf("Ingrese numero\n");
	scanf("%d",&num);
	if(num<0){
		contador=0;
	}else{
		if(num>=0){
			n++;
			sum= sum + num;
			prom=(float)sum/n;
			printf("Promedio = %d",prom);

		}
	}
}
return 0;
}
