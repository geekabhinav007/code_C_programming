/* #include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, r1, r2;
    printf("\nEnter a,b,c respectively ", a, b, c);
    scanf("%f%f%f", &a, &b, &c);
    if ((pow(b, 2) - 4 * a * c) >= 0)
    {
        r1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        r2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        printf("\nr1 = %f and r2 =%f\n", r1, r2);
    }
    else
     printf("Imaginary roots");

    return 0;
}  
*/
#include <stdio.h>


int max(int a, int b);

int main()
{
    int a, b, ret;
    printf("enter the values of a and b are:--\n");
    scanf("%d %d,&a,&b");

    ret = max(a, b);

    printf("Max value is : %d\n", ret);

    return 0;
}

int max(int a, int b)
{

    int result;

    if (a > b)
        result = a;
    else
        result = b;

    return result;
}