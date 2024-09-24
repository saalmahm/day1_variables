#include <stdio.h>
#include <math.h>

int main() {
float a,b,c,moy;
  printf("Entrer le premier nombre :\n");
  scanf("%f",&a);
  printf("Entrer le deuxieme nombre:\n");
  scanf("%f",&b);
  printf("Entrer le troisieme nombre:\n");
  scanf("%f",&c);
moy=cbrt(a * b * c);
 printf("la moyenne géométrique est:%f",moy);
  return 0;
}
