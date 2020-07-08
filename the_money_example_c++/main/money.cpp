#include "money.h"
#include "dollar.h"
#include "franc.h"

Money::Money(int amount) { this->amount = amount; }

string Money::currency() const { return _currency; }

bool Money::operator==(Money money) const {
  return amount == money.amount;
}

Dollar dollar(int amount) {
  return Dollar{amount};
}
Franc franc(int amount) {
  return Franc{amount};
}
