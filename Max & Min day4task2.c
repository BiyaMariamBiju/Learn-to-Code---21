#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d\n",a);
        if(b>c)
        {
            printf("%d\n",c);
        }
        else
        {
            printf("%d\n",b);
        }
    }
    else if(b>a && b>c)
    {
        printf("%d\n",b);
            if(a>c)
            {
                printf("%d\n",c);
            }
        else
        {
            printf("%d\n",a);
        }
    }
    else
    {
        printf("%d\n",c);
            if(a>b)
            {
                printf("%d\n",b);
            }
        else
        {
            printf("%d\n",a);
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
