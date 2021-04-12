//Kumar Abhinav
//ECE
//2017105

/*IN childhood we are punished and teacher 
said that you have right this sentence 
let say 100 times as a punishment*/
//so this program is about how we can skip hardwork of punisment.
//I am writing a joke and we have print this jokeas many times as user wants.

#include <stdio.h>
int main()
{
    int i, count;//count is user dependent variable. and "i" depends on count.
    printf("Enter Number Of times you want to read the joke: ");
    scanf("%d", &count);        //input  number of time you want to write this joke.
    for (i = 0; i < count; i++) // for syntax
    {
        printf("\n Programers never pay tax to the devil\n Because that would be a sin-tax issue.\n\n"); // joke!
    }
    printf("Now you can laugh Because this is a joke.\nIf you don't understand the joke. then laugh more loud.\n\n");
    //those who don't understand the joke please follow thie above instruction.
    return 0;
}
