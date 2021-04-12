//kumar abhinav
//ECE
//2017105

#include <stdio.h>
int main()
{
    long int n, sum = 0, m;
    printf("\n Name:-Kumar Abhinav");
    printf("\n Branch:-ECE A2");
    printf("\n Class Roll No.:-2017105\n");
    printf("Enter number to get sum of it's digts\n");
    printf("Enter a number:"); //print enter  number
    scanf("%ld", &n);          // take input from a user.
    while (n > 0)              //
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("Sum of digits of a number=%ld", sum); //print sum of digits f  number
    return 0;
}