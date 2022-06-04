using NUnit.Framework;

namespace Money;

public class MoneyTest
{
    [Test]
    public void TestMultiplication()
    {
        Money five = Money.Dollar(5);
        Assert.AreEqual(Money.Dollar(10), five.Times(2));
        Assert.AreEqual(Money.Dollar(15), five.Times(3));
    }

    [Test]
    public void TestEquality()
    {
        Assert.True(Money.Dollar(5).Equals(Money.Dollar(5)));
        Assert.False(Money.Dollar(5).Equals(Money.Dollar(6)));
        Assert.False(Money.Franc(5).Equals(Money.Dollar(5)));
    }

    [Test]
    public void TestCurrency()
    {
        Assert.AreEqual("USD", Money.Dollar(1).Currency());
        Assert.AreEqual("CHF", Money.Franc(1).Currency());
    }

    [Test]
    public void TestSimpleAddition()
    {
        var five = Money.Dollar(5);
        IExpression sum = five.Plus(five);
        var bank = new Bank();
        Money reduced = bank.Reduce(sum, "USD");
        Assert.AreEqual(Money.Dollar(10), reduced);
    }
}
