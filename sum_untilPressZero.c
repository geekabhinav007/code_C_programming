
//program to sum  the numbers you input  until you  input zero .
//if you press zero you will get the desired sum of the numbers you inputted before zero.

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("\nName:-Kumar Abhinav");
    printf("\nBranch:-ECE A2");
    printf("\nClass Roll No.:-2017105\n");
    do
    {
        printf("Enter a number: ");
        scanf("%i", &n); //ask for user input

        sum += n;     //do increment and sum until user input zero.
    } while (n != 0); //print sum if user input is zero.
    printf("Sum is = %d\n", sum);

    return 0;
}
