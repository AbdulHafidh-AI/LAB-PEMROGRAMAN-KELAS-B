#include <stdio.h>

int main(){
  int nilai[7] = {50, 75, 85, 80, 90, 100, 100};
  int len, i;
  int total = 0;
  
  len = sizeof(nilai) / sizeof(nilai[0]);
  for (i = 0; i <= len; i++){
    total += nilai[i];
  }
  printf("rata-rata: %.2f", (float) total / len);
}