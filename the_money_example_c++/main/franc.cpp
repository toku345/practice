#include "franc.h"
#include "money.h"

Franc::Franc(int amount) : Money(amount) { _currency = "CHF"; }

Money Franc::times(int multiplier) { return Money{amount * multiplier}; }

bool Franc::operator==(Franc money) const { return amount == money.amount; }
bool Franc::operator==(Money money) const { return false; }
