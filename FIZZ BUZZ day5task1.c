#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=1;
    while (n<=100)
    {
        if (n%15==0)
        {
            printf("FIZZBUZZ\t");
        }
        else if(n%5==0)
        {
            printf("BUZZ\t");
        }
        else
        {
            if(n%3==0)
            {
                printf("FIZZ\t");
            }
            else
            {
                printf("%d\t",n);
            }
        }
        
        n=n+1;
    }
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
