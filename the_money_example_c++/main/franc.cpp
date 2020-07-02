#include "franc.h"

Franc::Franc(int amount) {
  this->amount = amount;
}

Franc Franc::times(int multiplier) {
  return Franc { amount * multiplier };
}

bool Franc::operator==(Franc franc) const { return amount == franc.amount; }
