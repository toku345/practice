namespace Money;

public abstract class Money
{
    protected int amount;
    protected String currency;

    public Money(int amount, String currency)
    {
        this.amount = amount;
        this.currency = currency;
    }

    public abstract Money times(int multiplier);

    public String Currency()
    {
        return currency!;
    }

    public override bool Equals(Object? obj)
    {
        Money money = (Money)obj!;
        return amount == money.amount && GetType().Equals(money.GetType());
    }

    public static Money Dollar(int amount)
    {
        return new Dollar(amount, "USD");
    }

    public static Money Franc(int amount)
    {
        return new Franc(amount, "CHF");
    }
}
