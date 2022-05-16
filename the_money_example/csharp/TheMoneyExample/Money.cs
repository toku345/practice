namespace Money;

public abstract class Money
{
    protected int amount;

    public abstract Money times(int multiplier);

    public override bool Equals(Object? obj)
    {
        Money money = (Money)obj!;
        return amount == money.amount && GetType().Equals(money.GetType());
    }

    public static Money Dollar(int amount)
    {
        return new Dollar(amount);
    }

    public static Money Franc(int amount)
    {
        return new Franc(amount);
    }
}
