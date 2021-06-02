#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int num();
int main()
{
num();
}
int num()
{
int n,z=0,temp,x,y;

scanf("%d",&n);
temp=n;
while(n>0)
{

  x=n%10;
  y=x*x*x;
  z=z+y;
  n=n/10;
 
}
 
if(z==temp)
{
    printf("Amstrong");
}
  else
{
   printf("Not Amstrong");
}



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
