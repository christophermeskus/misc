#include <stdio.h>
int main()
{
  char operator;
  double num1;
  double num2;
  double result;

  printf("\nEnter your chosen operator (+ - * /): ");
  scanf("%c", &operator);
  printf("\nEnter number 1: ");
  scanf("%lf", &num1);
  printf("\nEnter number 2: ");
  scanf("%lf", &num2);

  switch(operator){
    case '+':
      result = num1 + num2;
      printf("\nResult: %.2lf\n", result);
      break;
    case '-':
      result = num1 - num2;
      printf("\nResult: %.2lf\n", result);
      break;
    case '*':
      result = num1 * num2;
      printf("\nResult: %.2lf\n", result);
      break;
    case '/':
      result = num1 / num2;
      printf("\nResult: %.2lf\n", result);
      break;
    default:
      printf("%c is not valid\n", operator);
      break;
  }
  return 0;
}  
