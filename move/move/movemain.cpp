#include <iostream>
#include "move.h"

using namespace std;

int main() {
  Move mo;
  cout << "The initial objects:\n";
  mo.showmove();
  cout << "add x by 5 and y by 3:\n";
  Move mo2(5,3);
  mo = mo.add(mo2);
  mo.showmove();
  cout << "reset x=1,y=1:\n";
  mo.reset(1,1);
  mo.showmove();
 
  return 0;
}