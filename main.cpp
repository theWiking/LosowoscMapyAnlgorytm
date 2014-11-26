#include "main.h"


int main(){
  int t = 8;
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