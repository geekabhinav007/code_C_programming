//Kumar Abhinav
//ECE
//2017105
#include <stdio.h> 
int main()
{
    int a, b; 
    printf("\nName:-Kumar Abhinav\n");
    printf("\nBranch:-ECE A2\n");
    printf("\nClass Roll No.:-2017105\n");

    printf("Enter Two Values :"); 
    scanf("%d%d", &a, &b);        
    sum(a, b);  
    mult(a, b);
    div(a, b);  
}
sum(int x, int y)
{
    int z;
    z = x + y;                   
    printf("Addtion : %d\n", z); 
    return 0;                    
}
mult(int x, int y)
{
    int z;
    z = x * y;                          
    printf("multiplication : %d\n", z); 
    return 0;                           
}
div(int x, int y)
{
    int z;
    z = x / y;               
    printf("Div : %d\n", z); 
    return 0;                
}


