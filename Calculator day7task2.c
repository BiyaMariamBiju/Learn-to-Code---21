#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{  
    float a,b,ans;
    
    int n,result;
    
    scanf("%d",&n);
    
    scanf("%f%f",&a,&b);
    
    switch(n)
    {
        case 1:
            result=a+b;
            printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n%d",result);
                break;
        case 2:
            result=a-b;
            printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n%d",result);
                   break;
        case 3:
            result=a*b;
             printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n%d",result);
                    break;
       case 4:
              
                if(b==0)
                    {
                      printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nCannot be determined") ; 
                    }
                else
                    {
                       ans=a/b;
                       printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n%.1f",ans);
                       
                    }
              break;
        default:   
                printf("Please Enter Your Choice\n");    
                   
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
