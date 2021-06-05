#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[100],n,i,*p;
    p=&a[0];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("DISPLAYING USING INDEX: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    
    printf("\nDISPLAYING USING POINTERS: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
