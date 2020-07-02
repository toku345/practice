#ifndef MAIN_DOLLAR_H_
#define MAIN_DOLLAR_H_


class Dollar {
public:
  Dollar(int amount);

  Dollar times(int multiplier);
  bool operator==(Dollar dollar) const;
private:
  int amount;
};

#endif
