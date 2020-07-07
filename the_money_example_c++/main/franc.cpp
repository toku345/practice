#include "franc.h"
#include "money.h"

Franc::Franc(int amount) : Money(amount) { }

bool Franc::operator==(Franc money) const { return amount == money.amount; }
bool Franc::operator==(Money money) const { return false; }
