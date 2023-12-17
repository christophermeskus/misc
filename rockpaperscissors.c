#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int game(char player, char program){
    if (player == program)
        return -1;
    if (player == 's' && program == 'p')
        return 0;
    else if (player == 'p' && program == 's')
        return 1;
    if (player == 's' && program == 'z')
        return 1;
    else if (player == 'z' && program == 's')
        return 0;
    if (player == 'p' && program == 'z')
        return 0;
    else if (player == 'z' && program == 'p')
        return 1;
}

int main(){

  int rn;
  char player, program, result;
  srand(time(NULL));
  rn = rand() % 100;

  if (rn < 33)
    program = 's';
  else if (rn > 33 && rn < 66)
      program = 'p';
  else 
    program = 'x';

  printf("\nEnter s for Stone, p for Paper, or x for Scissors!\n");
  scanf("%c", &player);
  result = game(player, program);

  if (result == -1){
    printf("Draw!");
  }
  else if (result == 1){
    printf("You won!");
  }
  else {
    printf("You lost!");
  }
    printf("\nPlayer chose: %c \nProgram chose: %c",player, program);
  return 0;
}
