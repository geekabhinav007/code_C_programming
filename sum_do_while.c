//kumar abhinav
//ECE
//2017105

//program to sum  the numbers you input  untill you  input zero .
//if you press zero you wil get the desire sum of the numbers you inputed before zero.

#include <stdio.h>
int main()
{
    int n, sum = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%i", &n); //ask for user input

        sum += n;     //do increment and sum until user input zero.
    } while (n != 0); //print sum if user input is zero.
    printf("Sum is = %d", sum);

    return 0;
}