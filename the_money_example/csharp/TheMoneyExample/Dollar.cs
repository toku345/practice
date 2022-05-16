namespace Money;

public class Dollar : Money
{
    public Dollar(int amount)
    {
        this.amount = amount;
    }

    public override Money times(int multiplier)
    {
        return new Dollar(amount * multiplier);
    }
}
