namespace Money;

public interface IExpression
{
    public Money Reduce(String to);
}
