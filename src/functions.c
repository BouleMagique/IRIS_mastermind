#include <stdio.h>
#include <unistd.h>

int comb_select(int tab[]){
  //fonction qui permet a J1 de choisir le code
  //declaration des variables
  int i;
    
  i = 0;
  
  printf("choisir 4 chiffres allant de 1 à 4\n");
  while(i < 4) {
    printf("entrez le %deme nombre\n", i+1);
    scanf("%d",&tab[i]);
    i++;
  }
  printf("la combinaison est: [%d][%d][%d][%d]\n",tab[0],tab[1],tab[2],tab[3]);
  printf("press ENTER to continue");
  while(getchar() != '\n');
  getchar();

  return(0);
}

int ur_turn(int tab[]){
  //fonction qui permet a J2 de proposer une combinaison
int i;
    
  i = 0;
  
  printf("Tentez de trouver la combinaison de J1.\nChoisir 4 chiffres allant de 1 à 4:\n");
  while(i < 4) {
    printf("\nentrez le %deme nombre\n", i+1);
    scanf("%d",&tab[i]);
    i++;
  }
  printf("la combinaison est: [%d][%d][%d][%d]\n",tab[0],tab[1],tab[2],tab[3]);
  printf("press ENTER to continue");
  while(getchar() != '\n');
  getchar();

  return(0);
}

int display_hint(int tab[]){
/*
fonction qui affiche un tableau 2d avec tout les hints
et retourne 1 si la combinaison est la bonne
*/

//declaration

  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 6; ++j)
    {
      printf("[%d]\n", tab[i][j]);
    }
  }
  return (0);
}


int tab_compare(){
  //fonction qui compare les 2 tab et affiche selon les regles du mastermind
  //decalration des variables
  int soluce[4];
  int tabj2[4];
  int count;
  int turns;
  //int tabcmp[4];

  turns = 5; //peux etre recoder plus tard pour etre dynamique, mais definit le nombre de tour que j2 a poour trouver la comb

  comb_select(soluce);
  for (count = 0; count < turns; ++count)
  {
    int tabhint[4] = {0,0,0,0};
    system("clear");
    ur_turn(tabj2);
    for (int i = 0; i < 4; ++i)
    {
      
      for (int j = 0; j < 4; ++j)
      {
        if (tabj2[i] == soluce[j])
        {
          printf("tab[%d] existe\n", i);
          tabhint[i] = 2;
          break;
        }
      }

      if (tabj2[i] == soluce[i])
      {
        printf("tab[%d] est a la bonne place\n", i);
        tabhint[i] = 1;
      }
    }
    printf("[%d][%d][%d][%d]",tabhint[0],tabhint[1],tabhint[2],tabhint[3]);
    display_hint(tabhint);
    while(getchar() != '\n');
    getchar(); 
  }
  return(0/*0 ou 1 en fonction de si la combinaison est ok ou pas*/);
}

int main() {
  system("clear");
  tab_compare();
  return(0);
}
