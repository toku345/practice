namespace Money;

public class Franc
{
    private int amount;

    public Franc(int amount)
    {
        this.amount = amount;
    }

    public Franc times(int multiplier)
    {
        return new Franc(amount * multiplier);
    }

    public override bool Equals(Object? obj)
    {
        Franc franc = (Franc)obj!;
        return amount == franc.amount;
    }
}
