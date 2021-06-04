#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[500],flag=0,n,i,j;
    scanf("%d",&n);
    
        for(i=0;i<n;i++)
        {
            
           scanf("%d",&a[i]);
            
        }
        for(i=0;i<n;i++)
        {
            for(j=2;j<=a[i]/2;j++)
            {
                if(a[i]%j==0)
                {
                   flag=flag+1;
                    break;
                }
                    
            }
        }
        printf("%d",n-flag);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
