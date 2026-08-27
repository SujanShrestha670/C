#include <stdio.h>
#include <math.h>

int main(void) {

  int note_1000, note_500, note_100, note_50, note_20, note_10, note_5, coin_1, coin_paisa;
  double amount, temp, remainder;

  printf("Enter the amount : ");
  scanf("%lf", &amount);

  temp = amount;

  while(temp > 0) {

    if(temp >= 1000) {
      note_1000 = (int)temp / 1000;
      remainder = fmod(temp, 1000);
      temp = remainder;
      printf("%d of 1000 required\n", note_1000);
      continue;
    }else if(temp >= 500) {
      note_500 = (int)temp / 500;
      remainder = fmod(temp, 500);
      temp = remainder;
      printf("%d of 500 required\n", note_500);
      continue;
    }else if(temp >= 100) {
      note_100 = (int)temp / 100;
      remainder = fmod(temp, 100);
      temp = remainder;
      printf("%d of 100 required\n", note_100);
      continue;
    }else if(temp >= 50) {
      note_50 = (int)temp / 50;
      remainder = fmod(temp, 50);
      printf("%d of 50 required\n", note_50);
      temp = remainder;
      continue;
    }else if(temp >= 20){
      note_20 = (int)temp / 20;
      remainder = fmod(temp, 20);
      temp = remainder;
      printf("%d of 20 required\n", note_20);
      continue;
    }else if(temp >= 10) {
      note_10 = (int)temp / 10;
      remainder = fmod(temp, 10);
      temp = remainder;
      printf("%d of 10 required\n", note_10);
      continue;
    }else if(temp >= 5) {
      note_5 = (int)temp / 5;
      remainder = fmod(temp, 5);
      temp = remainder;
      printf("%d of 5 required\n", note_5);
      continue;
    }else if(temp >= 1) {
      coin_1 = (int)temp / 1;
      remainder = fmod(temp, 1);
      temp = remainder;
      printf("%d of 1 required\n", coin_1);
      continue;
    }else {
      coin_paisa = (int)round(temp * 100);
      printf("%d of paisa required\n", coin_paisa);
      temp = 0;
    }

  }
  return 0;
}
