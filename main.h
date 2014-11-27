#ifndef MAIN_H
#define MAIN_H
#include "pole.h"
void ustawKordynatyPol(Pole **pole, int t){
  for (int y = 0; t>y; y++){
    for (int x = 0; t>x; x++){
      pole[x][y].ustawKordynaty(x, y);
    }
  }
}
/*
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

bool sprZgodnosci(Pole pole, int t){
  if (pole.getStylPola()>3 || pole.getStylPola()<1)
    return false;
  if (pole.getBrzegPola()>3 || pole.getBrzegPola()<1)
    return false;
  if (pole.getKrawedz()>8 || pole.getKrawedz()<0)
    return false;
  return true;
}
int losuj(int zakres){
  return rand()&zakres;
}
Pole wylosujPoprawnie(Pole pole, int t){
  bool test = false;
  while (!test){
    if (sprZgodnosci(pole, t))
      break;
    else
       pole.setKafelka(losuj(3)+1,losuj(3)+1,losuj(9));
   // cout << "Pole:" << pole.getStylPola() << "Krawedz:" << pole.getBrzegPola() << "KtoraKrawedz:" << pole.getKrawedz() << " ";

  }
 
  return pole;
}

bool sprawdzSasiadujace(Pole **pole, int x, int y, int t){
  //--+ +--
  //--+ +--
  //--+ +--
  

   if (x==0)
  return false;
  else if (pole[x-1][y].getStylPola() != pole[x][y].getStylPola())
  if (pole[x-1][y].getBrzegPola() == pole[x][y].getBrzegPola())
  if (pole[x - 1][y].getKrawedz() == 5 && pole[x][y].getKrawedz() == 3){
    
    return false;
  }
      
  else if (pole[x-1][y].getStylPola() == pole[x][y].getStylPola()){
   // cout << "test";
    if (pole[x-1][y].getBrzegPola() == pole[x][y].getBrzegPola()){
    
      if ((pole[x-1][y].getKrawedz() == 3 && pole[x][y].getKrawedz() == 5) ||
        (pole[x-1][y].getKrawedz() == 1 && pole[x][y].getKrawedz() == 2) ||
        (pole[x-1][y].getKrawedz() == 0 && pole[x][y].getKrawedz() == 1) ||
        (pole[x-1][y].getKrawedz() == 0 && pole[x][y].getKrawedz() == 2) ||
        (pole[x-1][y].getKrawedz() == 6 && pole[x][y].getKrawedz() == 7) ||
        (pole[x-1][y].getKrawedz() == 6 && pole[x][y].getKrawedz() == 8) ||
        (pole[x-1][y].getKrawedz() == 5 && pole[x][y].getKrawedz() == 3) ||
        (pole[x-1][y].getKrawedz() == 4 && pole[x][y].getKrawedz() == 5) ||
        (pole[x-1][y].getKrawedz() == 3 && pole[x][y].getKrawedz() == 4)){
       // wylosujPoprawnie(pole[x][y], t);
        return false;

      }
      }  
      
        }
  wylosujPoprawnie(pole[x][y], t);
  //cout << "Pole:" << pole[x][y].getStylPola() << "Krawedz:" << pole[x][y].getBrzegPola() << "KtoraKrawedz:" << pole[x][y].getKrawedz() << " ";

    return true;

}
*/
void wypiszDane(Pole **pole, int t){
  
}


///testy
void wypiszKordynatyPol(Pole **pole, int t){
bool test=true;
Pole buffor;
  for (int y = 0; t>y; y++){
    for (int x = 0; t>x; x++){
        cout << x << "." << y;

        pole[x][y].wypiszKordynaty(); //wpisuje kordynaty do tablicy x=x y=y;
        test = true;
       
  
        pole[x][y].setStylPola(pole[x][y].losStylPola());
        pole[x][y].losDrzewo(pole[x][y].getStylPola());
                  
                    
    
        cout << "Pole:" << pole[x][y].losStylPola() << "Drzewo:" << pole[x][y].czyDrzewo();
      cout << endl;
    }
    cout << endl;
  }
}
#endif