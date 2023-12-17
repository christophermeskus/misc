#include <stdio.h>

int main() {
  int correctValue = 5;
  int scanValue;
  
  printf("I am currently thinking of a number!\n");
  printf("Try to guess which one it is!\n");
  printf("Enter a value between 1 and 10:\n");
  scanf("%d", &scanValue);

  if (scanValue == correctValue){
    printf("Correct!\n");
  }
  else{ 
    printf("Wrong!\n");
  }
  return 0;
}
