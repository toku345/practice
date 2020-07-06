#ifndef LIB_MONEY_H_
#define LIB_MONEY_H_

class Money {
public:
  Money(int amount);

  bool operator==(Money money) const;

protected:
  int amount;
};

#endif
