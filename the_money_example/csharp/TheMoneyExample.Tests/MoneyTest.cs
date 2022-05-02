using NUnit.Framework;

namespace Money;

public class MoneyTest
{
    [Test]
    public void TestMultiplication()
    {
        var five = new Dollar(5);
        five.times(2);
        Assert.AreEqual(10, five.amount);
    }
}
