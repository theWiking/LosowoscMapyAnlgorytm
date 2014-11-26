#ifndef POLEFUNKCJE
#define POLEFUNKCJE
#include "pole.h"
int Pole::losuj(int zakres){
  return rand() % zakres;
}
int Pole::jakiStylPola(int wylosowana)    {
  //1 zielone
  //2 piasek
  //3 kamien
  if (wylosowana >= 0 && wylosowana<6)
    return 1;
  else if (wylosowana >= 7 && wylosowana<10)
    return 2;
  else if (wylosowana >= 10 && wylosowana<13)
    return 3;
}
int Pole::ktoryBrzegPola(){
  return losuj(9);
}
int Pole::getX(){
  return kordynaty.x;
}
int Pole::getY(){
  return kordynaty.y;
}
int Pole::getBrzegPola(){
  return ktoryBrzeg;
}
int Pole::getStylPola(){
  return jakiePole;
}

Point Pole::jakiRodzajBrzegu(int glowne, int krawedz){
  Point rodzajBrzegu;
  rodzajBrzegu.x = glowne;
  rodzajBrzegu.y = krawedz;
  return rodzajBrzegu;
}
void Pole::losowaniePola(){

  jakiePole = jakiStylPola(losuj(13));
  jakaKrawedz = jakiStylPola(losuj(13));
  rodzajBrzegu = jakiRodzajBrzegu(jakiePole, jakaKrawedz);
  ktoryBrzeg = ktoryBrzegPola();
  //kafelka.g
}
void Pole::ustawKordynaty(int x, int y){
  kordynaty.x = x;
  kordynaty.y = y;
}
void Pole::wypiszKordynaty(){
  cout << "x:" << kordynaty.x << "y:" << kordynaty.y << " ";
}
#endif
