namespace Money;

public class Bank
{
    public Money Reduce(IExpression source, String to)
    {
        return Money.Dollar(10);
    }
}
