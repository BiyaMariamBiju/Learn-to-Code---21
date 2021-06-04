#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
      int s,flag=0,c,x=0,i;
    char a[200];
    gets(a);
    s=strlen(a);
  
          
       for(i=0;i<s;i++)
        {
    
            
            
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            {
                flag=flag+1;
            }
            if(a[i]==32)
            {
                x=x+1;
            }
        }
        if(x==0)
        {
          c=s-flag;
        }
        else
        {
            c=(s-x)-flag;
        }
    
        printf("%d\n",flag);
        printf("%d\n",c);
        printf("%d\n",x);
     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
