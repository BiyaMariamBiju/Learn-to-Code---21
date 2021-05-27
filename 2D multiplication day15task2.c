#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10],b[10][10],r1,c1,r2,c2,i,j,k,sum=0,product[10][10];
  
    scanf("%d",&r1);
   
    scanf("%d",&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   
    scanf("%d",&r2);
   
    scanf("%d",&c2);
    
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
       {
          for(j=0;j<c2;j++)
           {
              for(k=0;k<r2;k++)
                {
                  sum = sum + (a[i][k]*b[k][j]);
                }
                 
              product[i][j] = sum;
              sum = 0;
            }
            
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
               printf("%d ",product[i][j]);
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
