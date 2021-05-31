#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,r,n,p;
    n= ' ';
    
    scanf("%d",&r);
    if(r>=1)
    {
            for(i=0;i<r;i++)
            {
                for(k=9-i; k<9;k++)
                {
                    printf("%c%c",n,n);
                }

                p=r*2;
                for(j=2*i;j<p-1;j++)
                {


                    printf("*%c",n);
                }
                    

               
                

                printf("\n");

            }
    }
    else
    {
        printf("ERROR");
    }

    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
