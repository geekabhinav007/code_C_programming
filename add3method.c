#include <stdio.h>

int main()
{
     int a, sum, carry , b;
    printf("enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        sum=a^b;
        carry=(a&b)<<1;
        a= sum;
        b= carry;
    }
    printf("sum is %d", sum);
    return 0;
}