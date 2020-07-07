#ifndef MAIN_DOLLAR_H_
#define MAIN_DOLLAR_H_

#include "money.h"

class Dollar : public Money {
public:
  Dollar(int amount);

  bool operator==(Dollar money) const;
  bool operator==(Money money) const;
};

#endif
