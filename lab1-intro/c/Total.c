#include <stdio.h>
int main()
{
    int  j, total = 0;    
 
    for (j = 1; j <= 15; j++)
    {
        total = total + j;        
    }
    printf("\nTotal is : %d\n", total);
}