#include <stdio.h>

int main(void) 
{

int n,k,b,i;
int fact;
scanf("%d",&n);

for(i=n ; i>0 ; i--)
{
    fact = 1;
    scanf("%d",&b);
    for(k=2 ; k<=b ; k++)
    fact *=k;
    printf("%d\n",fact);
}

	return 0;
}

