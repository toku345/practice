#include "doller.h"

Doller::Doller(int amount) {
  this->amount = amount;
}

void Doller::times(int multiplier) {
  amount *= multiplier;
}
