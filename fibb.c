#include <stdio.h>
int main()
{
    int a= 0, b= 1, c, i, element;
    printf("\nName:-Kumar Abhinav\n Branch:-ECE A2\n Class Roll No.:-2017105\n");
    printf("Enter the number of elements:");
    scanf("%d", &element);
    printf("The fibbonic series of %d element is :\n",element);
    printf("\n%d %d ", a, b);   
    for (i = 1; i < element; i++) 
    {
        c = a + b;
       printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}