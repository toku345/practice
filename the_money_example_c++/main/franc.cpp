#include "franc.h"
#include "money.h"

Franc::Franc(int amount, string currency) : Money(amount, currency) { }

bool Franc::operator==(Franc money) const { return amount == money.amount; }
bool Franc::operator==(Money money) const {
  auto franc = static_cast<Money>(*this);
  return franc == money;
}
