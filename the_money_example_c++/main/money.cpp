#include "money.h"

Money::Money(int amount, string currency) {
  this->amount = amount;
  this->_currency = currency;
}

string Money::currency() const { return _currency; }

Money Money::times(int multiplier) { return Money(amount * multiplier, _currency); }

bool Money::operator==(Money money) const {
  return amount == money.amount && _currency == money._currency;
}

Money Money::operator+(Money addend) {
  return Money(amount + addend.amount, _currency);
}

Money dollar(int amount) {
  return Money(amount, "USD");
}

Money franc(int amount) {
  return Money(amount, "CHF");
}
