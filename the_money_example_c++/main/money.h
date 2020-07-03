#ifndef LIB_MONEY_H_
#define LIB_MONEY_H_

class Money {
public:
  bool operator==(Money money) const;

protected:
  int amount;
};

#endif
