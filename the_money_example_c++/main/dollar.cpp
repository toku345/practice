#include "dollar.h"

Dollar::Dollar(int amount) {
  this->amount = amount;
}

Dollar Dollar::times(int multiplier) {
  return Dollar { amount * multiplier };
}

bool Dollar::operator==(Dollar money) const { return amount == money.amount; }
bool Dollar::operator==(Money money) const { return false; }
