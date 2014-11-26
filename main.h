#include "pole.h"
void ustawKordynatyPol(Pole **pole, int t){
  for (int y = 0; t>y; y++){
    for (int x = 0; t>x; x++){
      pole[x][y].ustawKordynaty(x, y);
    }
  }
}
bool sprawdzPoprawnosc(Pole **pole, int x, int y, int t){
  //*--
  //-+-
  //---
  if (x == 0 && y == 0){}
  else
  if (pole[x][y].getBrzegPola() == pole[x - 1][y - 1].getBrzegPola() && pole[x][y].getBrzegPola() != 4)
    return false;
  //---
  //*+-
  //---
  if (x == 0){}
  else
  if (pole[x][y].getBrzegPola() == pole[x - 1][y].getBrzegPola() && pole[x][y].getBrzegPola() != 4)
    return false;
  //-*-
  //-+-
  //---
  if (y == 0){}
  else
  if (pole[x][y].getBrzegPola() == pole[x][y - 1].getBrzegPola() && pole[x][y].getBrzegPola() != 4)
    return false;
  //--*
  //-+-
  //---
  if (y == 0 && x == t){}
  else
  if (pole[x][y].getBrzegPola() == pole[x + 1][y - 1].getBrzegPola() && pole[x][y].getBrzegPola() != 4)
    return false;
  //---
  //-+*
  //---
  if (x == t){}
  else
  if (pole[x][y].getBrzegPola() == pole[x + 1][y].getBrzegPola() && pole[x][y].getBrzegPola() != 4)
    return false;
  //---
  //-+-
  //--*
  if (y == t&&x == t){}
  else
  if (pole[x][y].getBrzegPola() == pole[x + 1][y + 1].getBrzegPola() && pole[x][y].getBrzegPola() != 4)
    return false;
  //---
  //-+-
  //-*-
  if (y == t){}
  else
  if (pole[x][y].getBrzegPola() == pole[x][y + 1].getBrzegPola() && pole[x][y].getBrzegPola() != 4)
    return false;
  //---
  //-+-
  //*--
  if (y == t&&x == 0){}
  else
  if (pole[x][y].getBrzegPola() == pole[x - 1][y + 1].getBrzegPola() && pole[x][y].getBrzegPola() != 4)
    return false;
  return true;
}

///testy
void wypiszKordynatyPol(Pole **pole, int t){
  for (int y = 0; t>y; y++){
    for (int x = 0; t>x; x++){
      cout << x << "." << y;
      pole[x][y].wypiszKordynaty();
    }
    cout << endl;
  }
}
