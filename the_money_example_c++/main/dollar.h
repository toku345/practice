#ifndef MAIN_DOLLAR_H_
#define MAIN_DOLLAR_H_

#include "money.h"

class Dollar : public Money {
public:
  Dollar(int amount);

  Dollar times(int multiplier);
  bool operator==(Dollar dollar) const;
private:
  int amount;
};

#endif
