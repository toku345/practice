namespace Money;

public class Dollar : Money
{
    public Dollar(int amount)
    {
        this.amount = amount;
        currency = "USD";
    }

    public override Money times(int multiplier)
    {
        return new Dollar(amount * multiplier);
    }
}
