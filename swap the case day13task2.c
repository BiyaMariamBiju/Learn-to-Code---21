#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,y,z,len;
    char s[100];
  
    gets(s);
    len = strlen(s);
    
    for(i=0;i<len;i++)
    {
        if((int)s[i]==32)
        {
            printf("%c",s[i]);
        }
        else
        {
        
            y = (int)s[i];
            
            if(y>=97 && y<=122)
            {
            
                z = y-32;
                printf("%c",z);
            }
            else
            { if(y>=65 && y<=90)
              {
              
                 z = y+32;
                 printf("%c",z);
              }
              else
              {
                  continue;
              }
            }
            
          
        }
    
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
