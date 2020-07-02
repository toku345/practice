#ifndef MAIN_FRANC_H_
#define MAIN_FRANC_H_


class Franc {
public:
  Franc(int amount);

  Franc times(int multiplier);
  bool operator==(Franc franc) const;
private:
  int amount;
};

#endif
