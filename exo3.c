#include <stdio.h>
#include <stdlib.h>
#include "testUnitaire.h"

/* Auteur : Kevin Jallet */
/* Date :  07/05/26 */
/* Résumé : transfome un nombre en base decimal
 en un nombre en base binaire */
/* Entrée(s) : un entier nb  */
/* Sortie(s) : un entier res  */
int F1(int nb);

/* Auteur :  kevin Jallet*/
/* Date : 07/05/26 */
/* Résumé : transforme un nombre en base decimal en un
nombre en base binaire de manière récursive */
/* Entrée(s) : un entier nb */
/* Sortie(s) : un entier res */
int F2(int nb, int acc);

int main(int argc, char* argv[]){
  printf("%d \n",F1(1));
  printf("%d \n",F2(1,0));
  printf("%d \n",F1(3));
  printf("%d \n",F2(3,0));
  printf("%d \n",F1(5));
  printf("%d \n",F2(5,0));
  printf("%d \n",F1(17));
  printf("%d \n",F2(17,0));
  testF1_1();
  testF1_25();
  testF1_0();
  testF1_10();
  testF2_1();
  testF2_25();
  testF2_0();
  testF2_10();
  return 0;
}

int F1(int nb){
  int  res=0;
  int  tmp=0;

  while(nb!=0){
    tmp = nb % 2;
    res = res * 10 + tmp;
    nb = nb / 2;
  }
  return res;
}

int F2(int nb,  int acc){
  if (nb == 0) {
    return acc;
  } else {
    return F2(nb/2,  acc*10 +(nb%2));
  }
}