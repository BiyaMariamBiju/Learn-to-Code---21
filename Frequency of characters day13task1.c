#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,sum=0,len;
    char s[100],a;
    
    gets(s);
    len = strlen(s);
    scanf("%c",&a);
    for(i=0;i<len;i++)
    {
        if(s[i]==a)
        {
            sum = sum+1;
        }
        else
        {
          continue;   
        }
        
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
