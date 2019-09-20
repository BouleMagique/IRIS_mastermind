#include <stdio.h>
#include <unistd.h>

int comb_select(){
  //fonction qui permet a J1 de choisir le code
  //declaration des variables
  int tab[4];
  int i;
    
  i = 0;
  
  printf("choisir 4 chiffres allant de 1 à 4\n");
  while(i < 4) {
    printf("entrez le %deme nombre\n", i+1);
    scanf("%i[1-4]",&tab[i]);
    i++;
  }
  printf("la combinaison est: [%d][%d][%d][%d]\n",tab[0],tab[1],tab[2],tab[3]);
  printf("press ENTER to continue\n");
  getchar();
  return(&tab);
}

int ur_turn(){
  //fonction qui permet a J2 de proposer une combinaison

  return(/*un tableau d'int*/0);
}

int tab_compare(/*le tableau de comb_select*/ /*le tableau de ur_turn*/){
  //fonction qui compare les 2 tab et affiche selon les regles du mastermind
  
  return(0/*0 ou 1 en fonction de si la combinaison est ok ou pas*/);
}

int main() {
  comb_select();
  return(0);
}
