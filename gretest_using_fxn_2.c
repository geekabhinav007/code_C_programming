#include <stdio.h>
int max(int a, int b);
int main()
{
    int a, b, ret;
    printf("enter the values of a and b are:--\n");
    scanf("%d %d",&a,&b);
    ret = max(a, b);
    printf("max of a and b is %d", ret);

    return 0;
}
int max(int a, int b)
{
    return(a>b)?a:b;
}