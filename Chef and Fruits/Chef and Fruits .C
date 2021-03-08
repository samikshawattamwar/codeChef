#include <stdio.h>
#include<stdlib.h>

int main(void) {
   int t;
   scanf("%d\n",&t);
   while(t--)
   {
      int N,M,K,diff;
      scanf("%d%d%d", &N, &M, &K);
      diff = abs(N-M);
      while(K--)
      {
         if(diff>0)
         diff--;
      }
      printf("%d\n" ,diff);   
   }  
	return 0;
}

