#include <stdio.h>
int main() 
{
   
    int number = 0,i;
    
    for(i = 0; i < 11 ; i++) 
    {
        
        printf("%dx%d = %d\n", i, 8,number);
        number = number + 8;
       
    }
    return 0;
}
