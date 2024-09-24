#include <stdio.h>

int main() {
char nom[10],prenom[10],sexe[10],email[30];
int age;
  printf("Entrer votre nom:\n");
  scanf("%s",&nom);
  printf("Entrer votre prenom:\n");
  scanf("%s",&prenom);
  printf("Entrer votre age:\n");
  scanf("%d",&age);
  printf("Entrer votre sexe:\n");
  scanf("%s",&sexe);
  printf("Entrer votre email:\n");
  scanf("%s",&email);
  printf("vos informations personnelles est:\n %s %s %d %s %s ",nom,prenom,age,sexe,email);
  return 0;
}
