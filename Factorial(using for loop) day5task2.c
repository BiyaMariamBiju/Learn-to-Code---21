#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int n,factorial=1;
    scanf("%d",&n);
      
    if (n>0)
    {
      for(factorial=1;n>0;n=n-1)
       {
          factorial=n*factorial;
         
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
