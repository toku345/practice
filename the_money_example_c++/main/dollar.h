#ifndef MAIN_DOLLAR_H_
#define MAIN_DOLLAR_H_

#include "money.h"

class Dollar : public Money {
public:
  Dollar(int amount);

  string currency() const;

  bool operator==(Dollar money) const;
  bool operator==(Money money) const;

private:
  string _currency;
};

#endif
