using NUnit.Framework;
using TheMoneyExample;

namespace TheMoneyExample.Tests;

public class Tests
{
    public Class1? _target;

    [SetUp]
    public void Setup()
    {
        _target = new Class1();
    }

    [Test]
    public void Test1()
    {
        Assert.AreEqual(3, _target!.Add2(1, 2));
    }
}
