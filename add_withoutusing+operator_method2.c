#include <stdio.h>
int add(int, int);
int main()
{
int a,b;
printf("\nEnter any two integers : ");
scanf("%d%d", &a, &b);
printf("\nsum of two numbers is : %d ", add(a, b));
return 0;
}
int add(int a, int b)
{
if (!a)
return b;
else
return add((a & b) << 1,a ^ b);
return 0;
}