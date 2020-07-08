#include "money.h"
#include "dollar.h"

Money::Money(int amount) { this->amount = amount; }

string Money::currency() const { return _currency; }

bool Money::operator==(Money money) const {
  return amount == money.amount;
}
