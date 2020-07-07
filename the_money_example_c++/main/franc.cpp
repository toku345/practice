#include "franc.h"
#include "money.h"

Franc::Franc(int amount) : Money(amount) {
  _currency = "CHF";
}

string Franc::currency() const {
  return _currency;
}

bool Franc::operator==(Franc money) const { return amount == money.amount; }
bool Franc::operator==(Money money) const { return false; }
