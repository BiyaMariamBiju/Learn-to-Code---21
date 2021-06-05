#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct students
{
    int rollno;
    char name[20];
    float marks;
    
}s[100];
int main()
{
    int i;
    
    for(i=0;i<4;i++)
    {
        scanf("%d",&s[i].rollno);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<4;i++)
    {
        printf("DETAILS OF ROLLNO %d\nNAME: %s\nMARKS: %.2f\n",s[i].rollno,s[i].name,s[i].marks);
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
