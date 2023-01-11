/*
* hit and brow program
*/

#include <stdio.h>

int player1 = 0;
int player2 = 0;

int judge_1(int num1, int *input_number_2){
  int i;

  if(input_number_2[0] == num1){
    printf("Hit\n");
    player1++;
  }
  if(input_number_2[1] == num1){
    printf("Hit\n");
    player1++;
  }
  if(input_number_2[2] == num1){
    printf("Hit\n");
    player1++;
  }else{
    for(i = 0; i < 3; i++){
    }if(num1 == input_number_2[i]){
      printf("Brow\n");
    }else{
      printf("miss\n");
    }
  }
}

int judge_2(int num2, int *input_number_1){
  int i;

  if(input_number_1[0] == num2){
    printf("Hit\n");
    player2++;
    return 1;
  }
  if(input_number_1[1] == num2){
    printf("Hit\n");
    player2++;
    return 1;
  }
  if(input_number_1[2] == num2){
    printf("Hit\n");
    player2++;
    return 1;
  }else{
    for(i = 0; i < 3; i++){
    }if(num2 == input_number_1[i]){
      printf("Brow\n");
      return 0;
    }else{
      printf("miss\n");
      return 0;
    }
  }
}


int main(){
  int input_number_1[3], input_number_2[3];
  int flag = 0;
  int round = 1;
  int i;

  printf("player 1は対戦用の数値を入力してください\n");
  for(i = 0; i < 3; i++){
    scanf("%d", &input_number_1[i]);
  }
  printf("player 2は対戦用の数値を入力してください\n");
  for(i = 0; i < 3; i++){
    scanf("%d", &input_number_2[i]);
  }

  printf("----------Start----------\n\n");

  while(1){
    printf("Round %d\n", round);
    round ++;

    int num1 = 0;
    printf("player 1は1桁の整数を入力してください\n");
    scanf("%d", &num1);
    judge_1(num1, input_number_2);

    int num2 = 0;
    printf("player 2は1桁の整数を入力してください\n");
    scanf("%d", &num2);
    judge_2(num2, input_number_1);

    if(player1 == 3 || player2 == 3){
      break;
    }
  }

  printf("\n\n----------結果----------\n");
  if(player1 < player2){
    printf("winner player1\n");
  }else{
    printf("winner player2\n");
  }

  return 0;
}
