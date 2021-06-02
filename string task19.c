#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


char name();
int main()
{
    name();

}

char name()
{
    int i,l,flag=0,n;
    char a[10];
   
    gets(a);

    l=strlen(a);
    for(i=l;i>=0;i--)
    {
      //printf("%c",a[i]);
      if(a[i]==32)
      {
          flag=flag+1;
      }
    }
    if(flag!=0)
    {
        n=flag+1;
        printf("no of words = %d",n);
    }
    else
    {
        n=1;
        printf("%d",n);
    }
    printf("\n");
    for(i=l-1;i>=0;i--)
    {
      printf("%c",a[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
