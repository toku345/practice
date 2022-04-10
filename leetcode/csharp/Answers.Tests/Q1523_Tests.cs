using NUnit.Framework;
using Answers.Q1523;

namespace Answers.UnitTests;

public class Q1523Tests
{
    private Solution _solution;

    [SetUp]
    public void Setup()
    {
        _solution = new Solution();
    }

    [Test]
    public void Example1()
    {
        int low = 3;
        int high = 7;
        int output = _solution.CountOdds(low, high);
        Assert.AreEqual(3, output);
    }

    [Test]
    public void Example2()
    {
        int low = 8;
        int high = 9;
        int output = _solution.CountOdds(low, high);
        Assert.AreEqual(1, output);
    }

    [Test]
    public void Test1()
    {
        int low = 0;
        int high = 1;
        int output = _solution.CountOdds(low, high);
        Assert.AreEqual(1, output);
    }

    [Test]
    public void Test2()
    {
        int low = 7;
        int high = 7;
        int output = _solution.CountOdds(low, high);
        Assert.AreEqual(1, output);
    }

    [Test]
    public void Test3()
    {
        int low = 10;
        int high = 10;
        int output = _solution.CountOdds(low, high);
        Assert.AreEqual(0, output);
    }
}
