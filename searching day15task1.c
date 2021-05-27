#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10],r,c,n,i,j,x=0;
   
    scanf("%d",&r);
    
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   
    scanf("%d",&n);
    
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
            
            if(a[i][j]==n)
            {
                printf("Element found at (%d,%d)",i,j);
                x=1;
            }
            
            
            else
            {
                
               continue;
            }
            printf("\n");
            
        }
    }
    if(x==1)
    {
        exit(0);
    }
    else
    {
        printf("Element not found");
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
