#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int numbers(int,int);
int main() 
{ 
    int a,b;
    scanf("%d%d",&a,&b);
    numbers(a,b);
}
int numbers(int a,int b)
{
    int temp;
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
