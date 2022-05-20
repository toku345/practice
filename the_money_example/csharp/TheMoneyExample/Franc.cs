namespace Money;

public class Franc : Money
{
    public Franc(int amount, String currency) : base(amount, currency) { }

    public override Money times(int multiplier)
    {
        return Money.Franc(amount * multiplier);
    }
}
