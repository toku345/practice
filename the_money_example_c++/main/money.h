#ifndef LIB_MONEY_H_
#define LIB_MONEY_H_

class Dollar;

class Money {
public:
  Money(int amount);

  Money times(int multiplier);

  bool operator==(Money money) const;

  static Money dollar(int amount);

protected:
  int amount;
};

#endif
