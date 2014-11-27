#ifndef MAIN
#define MAIN
#include "main.h"


int main(){
  srand(time(NULL));
  int t = 6;
  //utwórz pola
  Pole **pole = new Pole*[t];
  for (int i = 0; t>i; i++){
    pole[i] = new Pole[t];
  }
  ustawKordynatyPol(pole, t);
  wypiszKordynatyPol(pole,t);
  system("PAUSE");
  return 0;
}
#endif