#ifndef MAIN_FRANC_H_
#define MAIN_FRANC_H_

#include "money.h"

class Franc : public  Money {
public:
  Franc(int amount);

  string currency() const;

  bool operator==(Franc money) const;
  bool operator==(Money money) const;
};

#endif
