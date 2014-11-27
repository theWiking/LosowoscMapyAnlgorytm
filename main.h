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


bool sprawdzSasiadujace(Pole poleWczesnieje,Pole Obecne, int x, int y, int t){
  //--+ +--
  //--+ +--
  //--+ +--
  

 // cout << "Pole:" << Obecne.getStylPola() << "Krawedz:" << Obecne.getBrzegPola() << "KtoraKrawedz:" << Obecne.getKrawedz() << " ";
 // if (x==0)
 // return false;
  if (poleWczesnieje.getStylPola() != Obecne.getStylPola())
  if (poleWczesnieje.getBrzegPola() == Obecne.getBrzegPola())
  if (poleWczesnieje.getKrawedz() == 5 && Obecne.getKrawedz() == 3)
      return false;
  if (poleWczesnieje.getStylPola() == Obecne.getStylPola()){
   // cout << "test";
    if (poleWczesnieje.getBrzegPola() == Obecne.getBrzegPola()){
    
      if ((poleWczesnieje.getKrawedz() == 3 && Obecne.getKrawedz() == 5) ||
        (poleWczesnieje.getKrawedz() == 1 && Obecne.getKrawedz() == 2) ||
        (poleWczesnieje.getKrawedz() == 0 && Obecne.getKrawedz() == 1) ||
        (poleWczesnieje.getKrawedz() == 0 && Obecne.getKrawedz() == 2) ||
        (poleWczesnieje.getKrawedz() == 6 && Obecne.getKrawedz() == 7) ||
        (poleWczesnieje.getKrawedz() == 6 && Obecne.getKrawedz() == 8) ||
        (poleWczesnieje.getKrawedz() == 5 && Obecne.getKrawedz() == 3) ||
        (poleWczesnieje.getKrawedz() == 4 && Obecne.getKrawedz() == 5) ||
        (poleWczesnieje.getKrawedz() == 3 && Obecne.getKrawedz() == 4)){
   
        return false;

      }
      }  
      
        }

    return true;

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
        pole[x][y] = pole[x][y].wylosujPoprawnie(pole[x][y], t);
              // while (test){
                 //losuje bez pustych pól 
                 
        //if (x!=0)
                   // test = sprawdzSasiadujace(pole[x - 1][y], pole[x][y], x, y, t);
                  //  if (test==false)
                  //    break;
                 //   else
                  //    pole[x][y] = pole[x][y].wylosujPoprawnie(pole[x][y], t);
                    
               
         //cout<<test;      
       
      cout<<"Pole:"<<pole[x][y].getStylPola()<< "Krawedz:" << pole[x][y].getBrzegPola()<< "KtoraKrawedz:" << pole[x][y].getKrawedz()<< " ";
      cout << endl;
    }
    cout << endl;
  }
}
#endif