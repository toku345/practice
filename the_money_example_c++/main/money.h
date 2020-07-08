#ifndef LIB_MONEY_H_
#define LIB_MONEY_H_

#include <string>
using namespace std;

class Dollar;
class Franc;

class Money {
public:
  Money(int amount);

  string currency() const;

  bool operator==(Money money) const;

protected:
  int amount;
  string _currency;
};

Dollar dollar(int amount);
Franc franc(int amount);

#endif
