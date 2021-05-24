#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,x,num[100];
    
    scanf("%d",&x);
   
    for(i=0;i<x;i++)
    {
        scanf("%d",&num[i]);
    }
  
    scanf("%d",&n);
    for(i=0;i<x;i++)
    {
        if(num[i]==n)
        {
            printf("%d is present in this array",num[i]);
            exit(0);
        }
        
     continue;
        
    }
    printf("%d is not present in this array",n);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
