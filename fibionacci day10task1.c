#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,i,a,b,result;
   
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d %d",a,b);
    
    for(i=1;i<n-1;i++)
    {
        result = a+b;
        printf(" %d",result);
        a = b;
        b = result;
    }

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
