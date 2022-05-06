namespace Money;

public class Dollar
{
    public int amount;

    public Dollar(int amount)
    {
        this.amount = amount;
    }

    public Dollar times(int multiplier)
    {
        return new Dollar(amount * multiplier);
    }

    public bool Equals(Object obj)
    {
        Dollar dollar = (Dollar)obj;
        return amount == dollar.amount;
    }
}
