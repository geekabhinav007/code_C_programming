#include <stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d", &age);
    if (age > 18 && age<70)
    {
        printf("you can vote for election\n");
    }
    else if(age > 70)
    {
        printf("you are to old to drive a car");
        }
    else if(age<=18)
    {
        printf("you are not eligible for vote\n");
    }
    return 0;
}
