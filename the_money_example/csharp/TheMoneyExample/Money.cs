namespace Money;

public class Money : IExpression
{
    public int Amount { get; }

    public String Currency { get; }

    public Money(int amount, String currency)
    {
        Amount = amount;
        Currency = currency;
    }

    public Money Times(int multiplier)
    {
        return new Money(Amount * multiplier, Currency);

    }

    public IExpression Plus(Money addend)
    {
        return new Sum(this, addend);
    }

    public Money Reduce(String to)
    {
        return this;
    }

    public override bool Equals(Object? obj)
    {
        Money money = (Money)obj!;
        return Amount == money.Amount && Currency.Equals(money.Currency);
    }

    public override string ToString()
    {
        return $"{Amount} {Currency}";
    }

    public static Money Dollar(int amount)
    {
        return new Money(amount, "USD");
    }

    public static Money Franc(int amount)
    {
        return new Money(amount, "CHF");
    }
}
