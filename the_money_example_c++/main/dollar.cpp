#include "dollar.h"

Dollar::Dollar(int amount) {
  this->amount = amount;
}

Dollar Dollar::times(int multiplier) {
  return Dollar { amount * multiplier };
}

bool Dollar::operator==(const Dollar& dollar) const {
  return amount == dollar.amount;
}
