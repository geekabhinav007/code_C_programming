#include <stdio.h>

int main() {
  int values[3];

  printf("\nName:-Kumar Abhinav\nBranch:-ECE A2\n Class Roll No.:-2017105\n");
    printf("");
    printf("\n");

  printf("Enter 3 integers: ");

  
  for(int i = 0; i < 3; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  
  for(int i = 0; i < 3; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}