#include <stdio.h>

int main()
{
    long int a=5, b=-4;
    
    
    while (b != 0)
    {
        a++;
        b--;
    }
    printf("sum is %ld", a);
    
    return 0;
}