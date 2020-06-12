#include"stdio.h"
#include"stdlib.h"
#include"math.h"
int main()
{
int x=2, y=3;
printf("%d + %d = %d\n",x,y,x+y);
printf("%d - %d = %d\n",x,y,x-y);
printf("%d * %d = %d\n",x,y,x*y);
printf("%d / %d = %d\n",x,y,x/y);
float q=2, p=3;
printf("%.0f + %.0f = %.0f\n",q,p,q+p);
printf("%.0f - %.0f = %.0f\n",q,p,q-p);
printf("%.0f * %.0f = %.0f\n",q,p,q*p);
printf("%.0f / %.0f = %.2f\n",q,p,q/p);
double d=43;
printf("%f\n",d);


system("pause");
return 0;
}
