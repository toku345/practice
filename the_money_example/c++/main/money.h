#ifndef LIB_MONEY_H_
#define LIB_MONEY_H_

#include <string>
using namespace std;

class Money {
public:
  Money(int amount, string currency);

  string currency() const;

  Money times(int multiplier);

  bool operator==(Money money) const;

  Money operator+(Money addend);

protected:
  int amount;
  string _currency;
};

Money dollar(int amount);
Money franc(int amount);

#endif
