#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int factorial(int);
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=0)
    {
    
      printf("%d",factorial(a));
     
    }
   else
   {
   
    printf("ERROR");
   }
    
}
int factorial(int a)
{
 
    if(a==0 || a==1)
    {
       
        return (1);
    
    }
    
     return a*factorial(a-1);
  
  


        
   
   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   return 0;
}    

    
