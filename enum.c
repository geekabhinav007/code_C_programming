//kumar abhinav
//2017105
//ECE

#include <stdio.h> //header file
enum weekdays      //enum declared
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main()
{
    enum weekdays a, b, c;
    a = Monday;
    b = Tuesday;
    c = Saturday;
    printf("\nThe value of a is %d\n", a); //print value of enum
    printf("\nThe value of b is %d\n", b); //print value of enum
    printf("\nThe value of c is %d\n", c); //print value of enum
    return 0;
}