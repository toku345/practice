namespace Money;

public class Dollar : Money
{
    public Dollar(int amount)
    {
        this.amount = amount;
    }

    public Dollar times(int multiplier)
    {
        return new Dollar(amount * multiplier);
    }

    public override bool Equals(Object? obj)
    {
        Dollar dollar = (Dollar)obj!;
        return amount == dollar.amount;
    }
}
