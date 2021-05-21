#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
   float a,b,c,d,x,y,root1,root2;
    scanf("%f %f %f",&a,&b,&c);
    d = (b*b) - (4*a*c);
    
    if (d>0)
    {
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a) ;
        printf( "Distinct Real : %.2f , %.2f" , root1,root2);
    }
    else if (d==0)
    {
        root1 = -b/(2*a);
        root2 = -b/(2*a);
        printf("Equal Real: %.2f , %.2f", root1,root2);
    }
    else
    {
        x = (-b/(2*a));
        y = (sqrt(-d)/(2*a));
        
        printf("Complex: %.2f + i%.2f , %.2f - i%.2f",x,y,x,y);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
