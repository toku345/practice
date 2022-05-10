namespace Money;

public class Money
{
    protected int amount;

    public override bool Equals(Object? obj)
    {
        Money money = (Money)obj!;
        return amount == money.amount;
    }
}
