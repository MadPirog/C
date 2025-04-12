#include <stdio.h>

int main() {
  int blue_balls[5];
  for(int i = 0; i < 5; i++)
    blue_balls[i] = i + 5;
  int size = sizeof(blue_balls) / sizeof(blue_balls[0]);
  printf("В коробке blue_balls помещается %d шаров.\n", size);
  return 0;
}
