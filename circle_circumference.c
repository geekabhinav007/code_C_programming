#include <stdio.h>
int main()
{
   int r;
   float pie=3.14,area,circumf;

   //Ask user to enter the radius of circle
   printf("\nEnter radius of circle: ");
   //Storeing the user input into variable circle_radius
   scanf("%d",&r);

   
   //Caluclate and display Circumference
   circumf = 2 * pie * r;
   printf("\nCircumference of circle is: %f",circumf);

   return(0);
}