namespace Money;

public class Dollar : Money
{
    public Dollar(int amount, String currency) : base(amount, currency) { }

    public override Money times(int multiplier)
    {
        return Money.Dollar(amount * multiplier);
    }
}
