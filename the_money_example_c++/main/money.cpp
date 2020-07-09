#include "money.h"
#include "dollar.h"
#include "franc.h"

Money::Money(int amount, string currency) {
  this->amount = amount;
  this->_currency = currency;
}

string Money::currency() const { return _currency; }

Money Money::times(int multiplier) { return Franc(amount * multiplier, _currency); }

bool Money::operator==(Money money) const {
  return amount == money.amount && _currency == money._currency;
}

Dollar dollar(int amount) {
  return Dollar{amount, "USD"};
}
Franc franc(int amount) {
  return Franc{amount, "CHF"};
}
