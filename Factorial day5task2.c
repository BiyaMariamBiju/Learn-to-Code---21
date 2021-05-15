#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,factorial=1;
    scanf("%d",&n);
      
    if (n>0)
    {
     while(n>0)
      {
          factorial=n*factorial;
          n=n-1;
      }
        printf("%d",factorial);
    }
   else if(n==0)
   {
       printf("%d",factorial);
   }
    else
    {
        printf("ERROR");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
