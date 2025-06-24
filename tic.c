#include <stdio.h>

int check(int slots[])
{
  int wincondition=0;
  if (slots[0] == 0 && slots[1] ==0 && slots[2]==0) // row across
  {
    printf("\n");
    printf("Someone filled the row across :0c \n");
    printf("Congrats player O you win!\n");
    wincondition = 1;
  }
  if (slots[3]==0 && slots[4] && slots[5] == 0)
  {
    printf("\n");
    printf("Someone filled the row across :0c \n");
    printf("Congrats player O you win!\n");
    wincondition = 1;
  }
  if (slots[6] ==0 && slots[7] ==0 && slots[8] == 0)
  {
    printf("\n");
    printf("Someone filled the row across :0c \n");
    printf("Congrats player O you win!\n");
    wincondition = 1;
  }
  if (slots[0] ==0 && slots[3] ==0 && slots[6] == 0) //columns
  {
    printf("\n");
    printf("Someone filled a coloumn :0c \n");
    printf("Congrats player O you win!\n");
    wincondition = 1;
  }
  if (slots[1] ==0 && slots[4] == 0 && slots[7] == 0)
  {
    printf("\n");
    printf("Someone filled a coloumn :0c \n");
    printf("Congrats player O you win!\n");
    wincondition = 1;
  }
  if (slots[2] ==0 && slots[5] ==0 && slots[8] == 0)
  {
    printf("\n");
    printf("Someone filled a coloumn :0c \n");
    printf("Congrats player O you win!\n");
    wincondition = 1;
  }
  if (slots[0] ==0 && slots[4] ==0 && slots[8] ==0) //diagonal
  {
    printf("\n");
    printf("Someone filled a diagonal :0c \n");
    printf("Congrats player O you win!\n");
    wincondition = 1;
  }
  if (slots[2] ==0 && slots[4] ==0 && slots[6] ==0) //diagonal
  {
    printf("\n");
    printf("Someone filled a diagonal :0c \n");
    printf("Congrats player O you win!\n");
    wincondition = 1;
  }
  //OPPONENT
  if (slots[0] ==10 && slots[1] ==10 && slots[2] == 10) // row across
  {
    printf("\n");
    printf("Someone filled the row across\n");
    printf("Congrats player 1O you win!\n");
    wincondition = 1;
  }
  if (slots[3] == 10 && slots[4] ==10 && slots[5] == 10)
  {
    printf("\n");
    printf("Someone filled the row across\n");
    printf("Congrats player 1O you win!\n");
    wincondition = 1;
  }
  if (slots[6] ==10 && slots[7] ==10 && slots[8] == 10)
  {
    printf("\n");
    printf("Someone filled the row across\n");
    printf("Congrats player 1O you win!\n");
    wincondition = 1;
  }
  if (slots[0] == 10 && slots[3] == 10 && slots[6] == 10) //columns
  {
    printf("\n");
    printf("Someone filled a coloumn\n");
    printf("Congrats player 1O you win!\n");
    wincondition = 1;
  }
  if (slots[1] == 10 && slots[4] ==10 && slots[7] == 10)
  {
    printf("\n");
    printf("Someone filled a coloumn\n");
    printf("Congrats player 1O you win!\n");
    wincondition = 1;
  }
  if (slots[2] ==10 && slots[5] == 10 && slots[8] == 10)
  {
    printf("\n");
    printf("Someone filled a coloumn \n");
    printf("Congrats player 1O you win!\n");
    wincondition = 1;
  }
  if (slots[0] == 10 && slots[4] ==10 && slots[8] ==10) //diagonal
  {
    printf("\n");
    printf("Someone filled a diagonal\n");
    printf("Congrats player 1O you win!\n");
    wincondition = 1;
  }
  if (slots[2] == 10 && slots[4] == 10 && slots[6] ==10) //diagonal
  {
    printf("\n");
    printf("Someone filled a diagonal\n");
    printf("Congrats player 1O you win!\n");
    wincondition = 1;
  }
  if (slots[0] != 1 && slots[1] != 2 && slots[2] != 3 && slots[3] != 4 && slots[4] != 5 && slots[5] != 6 && slots[6] != 7 && slots[7] != 8 && slots[8] != 9) //no more moves left
  {
    printf("\n");
    printf("Board filled, it's a tie!\n");
    printf("You both win :)\n");
    wincondition = 1;
  }

  return wincondition;
}


int main()
{
//BOARD LAYOUT
  printf("Let's play tic-tac-toe! \n");
  int slots[9]={1,2,3,4,5,6,7,8,9};
  int i;
  for (i=0;i<9;i++)

  //Sets up initial board
  { //board funct
    if (i%3==0) //if the i is divisible by 3 I want it to start a new line because it is
    {
      printf("\n");
      printf("| "); //left side bracket
      printf("%d",slots[i]);
    }
    else
    {
      printf(" | ");
      printf("%d",slots[i]);
    }
  }
  printf("\n");

  int wincondition = check(slots);
  while (wincondition ==0)
  {
  //PLAYER MOVEMENTS 0
    printf("\n");
    printf("Where would you like to move to?");
    //asks user where they want to move
    int move;
    scanf("%d",&move);
    printf("You chose to move to %d",move);
    printf("\n");

    slots[move-1] = 0;
    move=move-1;
    if (slots[move] != 0 || slots[move] != 10) //checks to see if spot is taken by a player if not, cont...
    {
      for (i=0;i<9;i++)
      { //board funct
        if (i%3==0)
        {
          printf("\n");
          printf("| "); //left side bracket
          printf("%d",slots[i]);
        }
        else
        {
          printf(" | ");
          printf("%d",slots[i]);
        }
      }
      wincondition = check(slots);
      check(slots);
    }
    else
    {
      printf("Player tried to make an invalid move\n");
    }

    if (wincondition ==0)
    {
    //OPPONENT MOVEMENTS 10
      printf("\n");
      printf("Where would your opponent like to move to?");
      scanf("%d",&move);
      printf("Your opponent chose to move to %d",move);
      printf("\n");
      slots[move-1] = 10;
      if (slots[move-1] != 0 || slots[move-1] != 10)
      {
        for (i=0;i<9;i++)
        { //board funct
          if (i%3==0)
          {
            printf("\n");
            printf("| ");
            printf("%d",slots[i]);
          }
          else
          {
            printf(" | ");
            printf("%d",slots[i]);
          }
        }
      }
      else
      {
        printf("Player tried to make an invalid move\n");
      }
      wincondition = check(slots);
      check(slots);
    }
  }
}
