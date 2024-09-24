#include <stdio.h>

int main() {
float a,b,c,moy;
  printf("Entrer le premier nombre :\n");
  scanf("%f",&a);
  printf("Entrer le deuxieme nombre:\n");
  scanf("%f",&b);
  printf("Entrer le troisieme nombre:\n");
  scanf("%f",&c);
moy=((a*2)+(b*3)+(c*5))/10;
 printf("la moyenne est:%.2f",moy);
  return 0;
}
