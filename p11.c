#include<stdio.h>
int main()
{
float P , R , T , si ;
printf("\nEnter P,R,T:-");
scanf("%f%f%f",&P,&R,&T);
si = (P*R*T)/100;
printf("\n\n Simple Interest is : %f\n", si);
return (0);
}