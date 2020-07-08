#include "dollar.h"
#include "money.h"

Dollar::Dollar(int amount, string currency) : Money(amount) { _currency = currency; }

Money Dollar::times(int multiplier) { return dollar(amount * multiplier); }

bool Dollar::operator==(Dollar money) const { return amount == money.amount; }
bool Dollar::operator==(Money money) const { return false; }
