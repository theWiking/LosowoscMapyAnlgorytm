#ifndef POLEFUNKCJE
#define POLEFUNKCJE
#include "pole.h"
int Pole::losuj(int zakres){
  return rand()%zakres;
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
  return kafelka.jakisStylKrawedzi;
}
int Pole::getStylPola(){
  return kafelka.jakiStylGlownego;
}
int Pole::getKrawedz(){
  return kafelka.ktoraKrawedz;
}
Kafelka Pole::setKafelka(int glowne, int krawdz, int ktoraKrawedz){
  Kafelka kafelka;
  kafelka.jakiStylGlownego=glowne;
  kafelka.jakisStylKrawedzi=krawdz;
  kafelka.ktoraKrawedz=ktoraKrawedz;
  return kafelka;
}
void Pole::losowaniePola(){
  jakiePole = jakiStylPola(losuj(13));
  jakaKrawedz = jakiStylPola(losuj(13));
  jakiePole==jakaKrawedz?ktoryBrzeg=4:ktoryBrzeg = ktoryBrzegPola();
  kafelka = setKafelka(jakiePole, jakaKrawedz, ktoryBrzeg);
}
void Pole::ustawKordynaty(int x, int y){
  kordynaty.x = x;
  kordynaty.y = y;
}
void Pole::wypiszKordynaty(){
  cout << "x:" << kordynaty.x << "y:" << kordynaty.y << " ";
}
bool Pole::sprZgodnosci(Pole pole, int t){
  if (pole.getStylPola()>3 || pole.getStylPola()<1)
    return false;
  if (pole.getBrzegPola()>3 || pole.getBrzegPola()<1)
    return false;
  if (pole.getKrawedz()>8 || pole.getKrawedz()<0)
    return false;
  return true;
}
Pole Pole::wylosujPoprawnie(Pole pole,int t){
  bool test=false;
  while (!test){
    if (sprZgodnosci(pole, t))
      break;
    else
      pole.losowaniePola();
  }
  return pole;
}
#endif
