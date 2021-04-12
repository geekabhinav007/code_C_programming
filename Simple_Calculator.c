#include <stdio.h>
int main()
{
    int n1, n2;
    int sum, sub, mult, mod; //addition, subtraction, multiply , moduls respectively
    float div;               //division

    printf("\nName:-Kumar Abhinav");
    printf("\nBranch:-ECE A2");
    printf("\nClass Roll No.:-2017105\n");

    printf("Input number 1 : ");
    scanf("%d", &n1);
    printf("Input number 2 : ");
    scanf("%d", &n2);

  
    sum = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = (float)n1 / n2;
    mod = n1 % n2;

    
    printf("The sum of the given numbers : %d\n", sum);
    printf("The difference of the given numbers : %d\n", sub);
    printf("The product of the given numbers : %d\n", mult);
    printf("The quotient of the given numbers : %f\n", div);
    printf("MODULUS = %d\n", mod);

    return 0;
}
