#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     int a[10],temp,n,i,j;
    scanf("%d",&n);

      for(i=0;i<n;i++)
       {
          scanf("%d",&a[i]);
       }
      
       for(j=0;j<n;j++)
        {
        
         for(i=0;i<n-1;i++)
         {
           if(a[i]<a[i+1])
           {
           
             temp=a[i];
             a[i]=a[i+1];
             a[i+1]=temp;
            }
          }
       }
       
       
     
     for(i=0;i<n-1;i++)
         {
           if(a[i]==a[i+1])
            {
              continue;
            }  
           printf("%d",a[i+1]);
            break;

         }

             
      
   

       


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
