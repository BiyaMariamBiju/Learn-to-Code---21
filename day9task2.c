#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,i,temp;
    scanf("%d",&n);
    temp = n;
    for(i=0;i<=temp;n--)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d",n);
            
        }
        printf("\n");
        
        for(i=0;i<=temp-n;i++)
        {
            printf(" ");
            
        }
        
        
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
