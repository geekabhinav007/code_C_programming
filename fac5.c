#include<stdio.h>  
 int main()    
{    
 long int i,fact,num;    
 printf("Enter a number: ");    
  scanf("%ld",&num);    
    for(i=1;i<=num;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %ld",num,fact);    
return 0;  
}   