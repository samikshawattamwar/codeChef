#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   double gross,hra,da,basic;
	   scanf("%lf\n",&basic);
	   if(basic<1500)
	   {
	      hra = ((double)10/100)*basic;
	      da = ((double)90/100)*basic;
	   }
	   else
	   {
	      hra = 500;
	      da = ((double)98/100)*basic;
	   }
	   gross = basic+hra+da;
	   printf("%lf\n",gross);
	}
	return 0;
}

