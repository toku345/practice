#include "franc.h"

Franc::Franc(int amount) {
  this->amount = amount;
}

Franc Franc::times(int multiplier) {
  return Franc { amount * multiplier };
}
