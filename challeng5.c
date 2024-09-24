#include <stdio.h>

int main() {
float C;
  printf("Entrer la température en Celsius :\n");
  scanf("%f",&C);
  if(C < 0){
     printf("solide");
  }
  else if( C<=0 || C<100 ){
     printf("Liquide");
  }
  else if(C >= 100) {
     printf("Gaz");
  }

  return 0;
}
