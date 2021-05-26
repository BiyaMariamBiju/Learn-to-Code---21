#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a[10][10],r,c,i,j,x;
    
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  if(r==c)
    {
      for(i=0;i<r;i++)
      {
        
        printf("%d ",a[i][i]);
        
      }
      printf("\n");
        
      for(i=0;i<r;i++)
      { 
        x=c-1;
        for(j=x-i;j>=x-i;j--)
            {
                printf("%d ",a[i][j]);
            }
      }
    }
   else
    {
      printf("ERROR");
    }
        
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
