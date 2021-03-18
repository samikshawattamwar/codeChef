#include <stdio.h>

int main(void) {
	// your code goes here
	int n,count =0;
	scanf("%d",&n);
	while(n!=0)
	{
	   n= n/10;
	   count++;
	}
	if (count<4)
	{
	   printf("%d",count);
	}
	else
	{
	   printf("More than 3 digits");
	}
	return 0;
}

