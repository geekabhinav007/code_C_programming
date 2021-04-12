//kumar abhinav
//2017105
//ECE
//C program to convert temperature from degree celsius to fahrenheit
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: "); // Input temperature in celsius
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32; //celsius to fahrenheit conversion formula

    printf("%f Celsius = %f Fahrenheit", celsius, fahrenheit);

    return 0;
}