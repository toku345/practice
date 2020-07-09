#include "dollar.h"
#include "money.h"

Dollar::Dollar(int amount, string currency) : Money(amount, currency) { }

Money Dollar::times(int multiplier) { return Dollar(amount * multiplier, _currency); }

bool Dollar::operator==(Dollar money) const { return amount == money.amount; }
bool Dollar::operator==(Money money) const {
  auto dollar = static_cast<Money>(*this);
  return dollar == money;
}
