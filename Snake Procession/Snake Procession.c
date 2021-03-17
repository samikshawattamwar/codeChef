#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int n,game=0,i=0;
	   scanf("%d",&n);
	   char a[n+1];
	   scanf("%s",a);
	   for( i =0; i<strlen(a); i++)
	   {
	      if(a[i] == 'H')
	      {
	         game++;
	      }
	      if(a[i] == 'T')
	      {
	         game--;
	      }
	      if(game>1)
	      {
	         printf("Invalid\n");
	         break;
	      }
	      if(game<0)
	      {
	         printf("Invalid\n");
	         break;
	      }
	   }
	   if(game!=0 && i == strlen(a))
	   {
	      printf("Invalid\n");
	   }
	   else if (i == strlen(a))
	   {
	      printf("Valid\n");
	   }
	}
	return 0;
}

