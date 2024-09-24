#include <stdio.h>
#include <math.h>

int main() {
int r;
float v;
const float pi=3.14;
  printf("Entrer le volume de la sphére :\n");
  scanf("%d",&r);
  v=(4/3)*pi*pow(r,3);
  printf("le volume de sphère est:%f",v);
  return 0;
}
