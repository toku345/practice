#include "dollar.h"
#include "money.h"

Dollar::Dollar(int amount) : Money(amount) { }

bool Dollar::operator==(Dollar money) const { return amount == money.amount; }
bool Dollar::operator==(Money money) const { return false; }