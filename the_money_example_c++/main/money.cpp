#include "money.h"

Money::Money(int amount) {
  this->amount = amount;
}

bool Money::operator==(Money money) const {
  return amount == money.amount;
}
