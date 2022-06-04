namespace Money;

public class Money
{
    protected int amount;
    protected String currency;

    public Money(int amount, String currency)
    {
        this.amount = amount;
        this.currency = currency;
    }

    public Money times(int multiplier)
    {
        return new Money(amount * multiplier, currency);

    }

    public String Currency()
    {
        return currency!;
    }

    public override bool Equals(Object? obj)
    {
        Money money = (Money)obj!;
        return amount == money.amount && Currency().Equals(money.Currency());
    }

    public override string ToString()
    {
        return $"{amount} {currency}";
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
