#include "money.h"
#include "dollar.h"

Money::Money(int amount) { this->amount = amount; }

Money Money::times(int multiplier) {
  return Money{ amount * multiplier };
}

bool Money::operator==(Money money) const {
  return amount == money.amount;
}

Money Money::dollar(int amount) {
  return Dollar{amount};
}
