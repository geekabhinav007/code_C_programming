#include <stdio.h>
int main()
{
    float pie = 3.14, area, r; //variable

    printf("The radius of the circle is: \n", r); //radius input
    scanf("%f", &r);

    area = (pie * r * r); //formula
    printf("The area of the given circle is %f", area);
    return 0;
}