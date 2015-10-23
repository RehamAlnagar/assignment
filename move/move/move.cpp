#include <iostream>
#include "move.h"

using namespace std;

Move::Move(double a, double b) {
  x = a;
  y = b;
}

void Move::showmove() const {
  cout << "x is " << x << endl;
  cout << "y is " << y << endl;
}

Move Move::add(const Move & m) const {
  double newx = this->x + m.x;
  double newy = this->y + m.y;
  Move movenew = Move(newx, newy);
  return movenew;
}

void Move::reset(double a, double b) {
  x = a;
  y = b;
}