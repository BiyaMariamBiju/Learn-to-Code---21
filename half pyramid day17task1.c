#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,r,n;
   
    scanf("%d",&r);
    if(r>=1)
     {
        for(i=1;i<=r;i++)
        {
          for(j=1;j<=i;j++)
            {
                n=j+0;
                printf("%d ",n);
                
                
            }
            printf("\n");
         }
    }
    else
    {
        printf("ERROR");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
