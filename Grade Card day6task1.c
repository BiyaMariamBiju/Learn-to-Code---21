#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float a,b,c,z,x;
    
    scanf("%f%f%f",&a,&b,&c);
    z=a+b+c;
    x=z/3;
   
    if (x>= 90)
    {
        printf("%.2f\nA",x);
    }
    else if(x>= 80)
    {
        printf("%.2f\nB",x);
    }
    else if(x>= 70)
    {
        printf("%.2f\nC",x);
    }
    else if(x>= 60) 
    {
        printf("%.2f\nD",x);
    }
    else if(x>= 40)
    {
        printf("%.2f\nE",x);
    }
    else
    {
        printf("%.2f\nF",x);
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
