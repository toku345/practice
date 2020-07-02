#ifndef MAIN_DOLLAR_H_
#define MAIN_DOLLAR_H_


class Dollar {
public:
  int amount;

  Dollar(int amount);

  Dollar times(int multiplier);
  bool equals(Dollar dollar);
};

#endif
