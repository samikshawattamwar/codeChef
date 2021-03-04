#include <stdio.h>

int main(void) {
	int t,b;
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d",&b);
	   b-=2;
	   b = b/2;
	   b=b*(b+1)/2;
	   printf("%d\n",b);
	}
	return 0;
}

