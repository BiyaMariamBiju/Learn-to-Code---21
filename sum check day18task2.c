#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int,int);
int main() {
int a,b,add,rem,rev=0,i,flag=0;
   
    scanf("%d%d",&a,&b);
    add = sum(a,b);
    printf("%d",add);
    printf("\n");
    if(add%2==0)
    {
        while(add>0)
        {
            rem=add%10;
            rev=(rev*10)+rem;
            add=add/10;
        }
        printf("%d",rev);
    }
    else
    {
    
        for(i=2;i<=add/2;++i)
        {
            if(add%i==0)
            {
               
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Prime");
        }
        else
        {
            printf("Not prime");
        }
    }
    
    
}
int sum(int x,int y)
{
    int s;
    s=x+y;
    return(s);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
