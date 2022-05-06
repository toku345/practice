using NUnit.Framework;

namespace Money;

public class MoneyTest
{
    [Test]
    public void TestMultiplication()
    {
        var five = new Dollar(5);
        Dollar product = five.times(2);
        Assert.AreEqual(10, product.amount);
        product = five.times(3);
        Assert.AreEqual(15, product.amount);
    }
}
