#include <stdio.h>
int main()
{
    int n1, n2;

    printf("\nName:-Kumar Abhinav");
    printf("\nBranch:-ECE A2");
    printf("\nClass Roll No.:-2017105\n");

    printf("\nEnter two Number: ");
    scanf("%d %d", &n1, &n2);

    if (n1 == n2)
    {
        printf("Result: %d = %d", n1, n2);
    }

    else if (n1 > n2)
    {
        printf("Result: %d > %d", n1, n2);
    }

    else
    {
        printf("Result: %d < %d", n1, n2);
    }

    return 0;
}