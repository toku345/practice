#include "money.h"

bool Money::operator==(Money money) const {
  return amount == money.amount;
}
