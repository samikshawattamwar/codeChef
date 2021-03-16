#include <stdio.h>

int main(void) {
	// your code goes here
	int l,b;
	int area,peri;
	scanf("%d",&l);
	scanf("%d",&b);
	
	area = l*b;
	peri = 2*(l+b);
	
	if (area>peri)
	{
	   printf("Area\n");
	   printf("%d",area);
	}
	
	else if (area<peri)
	{
	   printf("Peri\n");
	   printf("%d",peri);
	   
	}
	
	else
	{
	   printf("Eq\n");
	   printf("%d",peri);
	}
	return 0;
}

