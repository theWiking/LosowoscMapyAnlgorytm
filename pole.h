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
  Point jakiRodzajBrzegu(int glowne, int krawedz);


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

  void losowaniePola();

private:
  Point kordynaty;
  string nazwa;
  int jakiePole;
  int ktoryBrzeg;
  Point rodzajBrzegu;
  int jakaKrawedz;
  Kafelka kafelka;
};

#endif // POLE_H
