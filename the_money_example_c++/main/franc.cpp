#include "franc.h"
#include "money.h"

Franc::Franc(int amount, string currency) : Money(amount, currency) { }

Money Franc::times(int multiplier) { return franc(amount * multiplier); }

bool Franc::operator==(Franc money) const { return amount == money.amount; }
bool Franc::operator==(Money money) const { return false; }
