#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int numbers();
int main() 
{
    numbers();
}
int numbers()
{
    int a,b,temp;
   
    scanf("%d%d",&a,&b);
    printf("a=%d",a);
     printf(" ");
    printf("b=%d",b);
    printf("\n");
    temp=a;
    a=b;
    b=temp;
    printf("a=%d",a);
    printf(" ");
    printf("b=%d",b);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
