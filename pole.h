#ifndef POLE_H
#define POLE_H
#include "header.h"
struct Point{
  int x, y;
};
struct Kafelka{
  int jakiStylGlownego, jakisStylKrawedzi, ktoraKrawedz;
};
class Pole{
protected:
  int losuj(int zakres);
  int jakiStylPola(int wylosowana);
  int ktoryBrzegPola();
  bool sprZgodnosci(Pole pole, int t);
  

public:
  Pole();
  virtual ~Pole();
  ///funkcje
  void ustawKordynaty(int x, int y);
  void wypiszKordynaty();
  int getX();
  int getY();
  int getBrzegPola();
  int getStylPola();
  int getKrawedz();
  void losowaniePola();
  Kafelka setKafelka(int glowne, int krawdz, int ktoraKrawedz);
  Pole wylosujPoprawnie(Pole pole, int t);

private:
  Point kordynaty;
  Kafelka kafelka;
  //zmienne pomocnicze
  int jakiePole;
  int ktoryBrzeg;
  int jakaKrawedz;
  
};

#endif // POLE_H
