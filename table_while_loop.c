//Kumar Abhinav
//ECE
//2017105
//Table of user choice .

#include <stdio.h>
int main()
{
    int num, j = 1, res; //variables and user input.
    printf("Enter the number:");
    scanf("%d", &num); //Enter a number . To get the table of that number you have entered.
    while (j <= 10)    //condition on "j".
    {
        res = num * j; //Formula
        printf("%d X %d = %d\n", num, j, res);
        j++; //increment
    }
    return 0;
}
