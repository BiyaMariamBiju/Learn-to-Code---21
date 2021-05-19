#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,temp,rev,rem;
    scanf("%d",&n);
    rev = 0;
    temp = n;
    while(n>0)
    {
       rem = n%10;
       rev = (rev*10)+rem;
       n = n/10;

    }
    if(temp==rev)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
      
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
