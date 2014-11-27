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
  //int ktoryBrzegPola();
  //bool sprZgodnosci(Pole pole, int t);
  

public:
  Pole();
  virtual ~Pole();
  ///funkcje
  void ustawKordynaty(int x, int y);
  void wypiszKordynaty();
  int getX();
  int getY();
  //int getBrzegPola();
  int losStylPola();
  int getStylPola();
  void setStylPola(int styl);
  //int getKrawedz();
  void losowaniePola(int styl);
  void losDrzewo(int styl);
  bool czyDrzewo();
  //void setKafelka(int glowne, int krawdz, int ktoraKrawedz);
  //Pole wylosujPoprawnie(Pole pole, int t);

private:
  Point kordynaty;
  int stylPola;
  bool drzewo;
  //Kafelka kafelka;
  //zmienne pomocnicze
  //int jakiePole;
  //int ktoryBrzeg;
  //int jakaKrawedz;
  
};

#endif // POLE_H
