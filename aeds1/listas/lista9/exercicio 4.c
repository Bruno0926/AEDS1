#include <stdio.h>

int main() {
  float distancia, volume, consumo, distancia2, volume2, consumo2;

  printf("Distancia percorrida pelo Gol eh de (km): \n");
  scanf("%f", &distancia);

  printf("Volume gasto de combustivel do Gol (l): \n");
  scanf("%f", &volume);

  consumo = distancia/volume;
  
  printf("\n O consumo medio do gol eh de: %.3f",consumo );

  printf("\n Distancia percorrida pelo Fusca eh de (km): ");
  scanf("%f", &distancia2);

  printf("\n Volume gasto de combustivel do Fusca (l): ");
  scanf("%f", &volume2);

  consumo2 = distancia2 / volume2;
  
  printf("\n O consumo medio do Fusca eh de: %.3f",consumo );

  if (consumo > consumo2){
    printf("\n O gol eh mais economico");
  }
  else{
    printf("\n O Fusca eh mais economico");
  }
    
  return(0);
}