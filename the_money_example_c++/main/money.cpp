#include "money.h"

Money::Money(int amount) { this->amount = amount; }

Money Money::times(int multiplier) { return Money{amount * multiplier}; }

string Money::currency() const { return _currency; }

bool Money::operator==(Money money) const {
  return amount == money.amount;
}
