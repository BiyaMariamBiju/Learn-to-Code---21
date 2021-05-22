#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,i,marks[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Entered array:");
    for(i=0;i<n;i++)
    {
        printf(" %d",marks[i]);
    }
    printf("\n%d",marks[1]);
    
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
