#include <stdio.h>

int main(void){
  int totalcedulas;
  float saque, total, cedulas;

  printf("Qual valor você deseja sacar? R$ ");
  scanf("%f", &saque);

  total = saque;
  cedulas = 100;
  totalcedulas = 0;

  while (total != 0) {
    if (total >= cedulas){
      total = total - cedulas;
      totalcedulas = totalcedulas + 1;
    } else {
      printf("\nTotal de %d cédulas de R$%f", totalcedulas, cedulas);
      totalcedulas = 0;
      if (cedulas == 100) {
        cedulas = 50;
      } else if (cedulas == 50){
        cedulas = 20;
      } else if (cedulas == 20){
        cedulas = 10;
      } else if (cedulas == 10) {
        cedulas = 5;
      } else if (cedulas == 5){
        cedulas = 1;
      } else {
        total = 0;
      }
    }
  }
  printf("\nTotal de %d cédulas de R$%f", totalcedulas, cedulas);
}