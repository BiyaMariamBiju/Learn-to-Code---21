#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i,x=0,y=0,n,num[100];
   
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            x=x+1;
            
        }
    
        
        else
        {
            y=y+1;
            
        }
    
        
    }
    printf("%d\n",x);
    printf("%d\n",y);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
