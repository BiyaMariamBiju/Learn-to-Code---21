#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ 
   
    int n;

    printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");

    scanf("%d",&n);

        

  do

    {

      

     

      switch(n)

      {

          case 1:

              

              for(n=1;n<=10;n++)

              {

                  printf("%d ",n);

              }

            

              break;

          case 2:

              

             for(n=2;n<=20;n=n+2)

             {

                 printf("%d ",n); 

             }

              break;

          case 3:

              

             for(n=3;n<=30;n=n+3)

             {

                printf("%d ",n);  

             }

              break;

          case 4:

              

             for(n=4;n<=40;n=n+4)

             {

                printf("%d ",n);  

             }

             break;

          case 5:

              

              for(n=5;n<=50;n=n+5)

             {

                printf("%d ",n);  

             }

              break;

          default:

              

              printf("Enter a valid option!");

              

              break;

      }

    

     printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n"); 

        

      scanf("%d",&n);

        

      

        

   } while(n<6 || n>6);

        

                   

              

        

      

    

  
    
        
   
 





    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
