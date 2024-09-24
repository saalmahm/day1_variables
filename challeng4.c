#include <stdio.h>

int main() {
float kmH,mS;
  printf("Entrer la vitesse en kilomètres par heure (km/h):\n");
  scanf("%f",&kmH);
  mS=kmH * 0.27778;
  printf("la vitesse en mètres par seconde (m/s) est:\n %f ",mS);
  return 0;
}
