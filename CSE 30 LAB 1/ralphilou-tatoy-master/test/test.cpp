#include <igloo/igloo.h>
#include <Functions.h>
using namespace igloo;
Context(MaxFunctionTests)
{
    Spec(OneGreaterThanZero){
        Assert::That(max(1,0), Equals(1));
    }
    Spec(ZeroLessThanOne){
        Assert::That(max(0,1), Equals(1));
    }
    Spec(FiveGreaterThanTwo){
        Assert::That(max(5,2), Equals(5));
    }
    Spec(SevenLessThanNine){
        Assert::That(max(7,9), Equals(9));
    }
};
Context(EvenFunctionTests)
{
    Spec(EvenTwo){
        Assert::That(even(2), Equals(1));
    }
    Spec(EvenZero){
        Assert::That(even(0), Equals(1));
    }
    Spec(Eventhree){
        Assert::That(even(3), Equals(0));
    }
    Spec(Eventwenty){
        Assert::That(even(20), Equals(1));
    }
    Spec(Eventhirtyyone){
        Assert::That(even(31), Equals(0));
    }
};
Context(SumFunctionTests)
{
    Spec(sumTwo){
        Assert::That(sum(2), Equals(3));
    }
    Spec(sumten){
        Assert::That(sum(10), Equals(55));
    }
    Spec(sumzero){
        Assert::That(sum(0), Equals(0));
    }
    Spec(sumtwenty){
        Assert::That(sum(20), Equals(210));
    }
    Spec(sumhundred){
        Assert::That(sum(100), Equals(5050));
    }
};

int main() {
	// Run all the tests defined above
	return TestRunner::RunAllTests();
}
