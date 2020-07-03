#ifndef MAIN_FRANC_H_
#define MAIN_FRANC_H_

#include "money.h"

class Franc : public  Money {
public:
  Franc(int amount);

  Franc times(int multiplier);
};

#endif
