#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,b,hcf,x,y;
    scanf("%d %d",&a,&b);
   x = (a>b) ? b : a ;
   y = (a>b) ? a%b : b%a ;
    if (y==0)
    {
        hcf=x;
    }
    else if (x%y==0)
    {
        hcf=y;
     }
    
    else
    {
        hcf=x%y;
    }
    
    
    printf("%d",hcf);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
