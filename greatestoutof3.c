#include<stdio.h>
int main()
{  
   int n1,n2,n3;//Enter 3 number which you would want to compare.
   
   
   printf("\nEnter value of n1, n2 and n3:\n");//print n1,n2,n3
  
   scanf("%d %d %d",&n1,&n2,&n3);
                                                                                    
   if((n1>n2)&&(n1>n3))  //condition 1..
      printf("\n %d is greatest.",n1);//n1 is greater
   else if((n2>n3)&&(n2>n1)) //codition 2.
      printf("\n %d is greatest.",n2); //n2 is greater.
   else
      printf("\n %d is greatest.\n",n3);// n3 is greater.
   return 0;
}