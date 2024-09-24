#include <stdio.h>

int main() {
float a,b,add,deff,multp,divis;
  printf("Entrer le premier nombre \"a\":\n");
  scanf("%f",&a);
  printf("Entrer le deuxieme nombre \" b\":\n");
  scanf("%f",&b);
 add=a+b;
 deff=a-b;
 multp=a*b;
 divis=a/b;
 printf(" a+b est:%.2f \n a-b est:%.2f \n a*b est:%.2f \n a/b est:%.2f",add,deff,multp,divis);
  return 0;
}
