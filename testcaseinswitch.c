//kumar abhinav
//ECE
//2017105

//this program demostrate the function of calulator using switch

#include <stdio.h>

int main() {
    char ope;  //operator 
    double n1, n2;

    printf("Enter an operator (+, -, *, /): "); //print to select one of the opertor from user
    scanf("%c", &ope);                //user input for oprators
    printf("Enter two number : ");         
    scanf("%lf %lf",&n1, &n2);         /*Enter the number on which you 
                                        want to perform operation */
    switch(ope)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match in the followings (+, -, *, /) thats why print error
        default:
            printf("Error! operator is not correct");  
    }

    return 0;
}