#include "franc.h"

Franc::Franc(int amount) {
  this->amount = amount;
}

Franc Franc::times(int multiplier) {
  return Franc { amount * multiplier };
}

bool Franc::operator==(Franc money) const { return amount == money.amount; }
bool Franc::operator==(Money money) const { return false; }
