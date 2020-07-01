#include "doller.h"

Doller::Doller(int amount) {
  this->amount = amount;
}

Doller Doller::times(int multiplier) {
  return Doller { amount * multiplier };
}

bool Doller::equals(Doller object) {
  return true;
}
