#include <igloo/igloo.h>
#include <MemoryStuff.h>

using namespace igloo;

Context(DecimalToHexTest){
	Spec(Seven_07){
		// Check to see if we actually add a 0 in front of a single digit result
		Assert::That(decToHex(7), Equals("07"));
	}

	Spec(Fifteen_0F){
		// Check to see if hex symbols A-F are in upper case
		Assert::That(decToHex(15), Equals("0F"));
	}
	Spec(Zero_0)
	{
		Assert::That(decToHex(0), Equals("00"));
	}
	Spec(Ten_10)
	{
		Assert::That(decToHex(10), Equals("0A"));
	}
	Spec(ThreeHundredFourteen_314)
	{
		Assert::That(decToHex(314), Equals("13A"));
	}
	Spec(LargeNumber_12344)
	{
		Assert::That(decToHex(12344), Equals("3038"));
	}
	
};

Context(MemoryContentFunctionTest){
	Spec(ThreeHundredFourteen_00_00_01_3A){
		Assert::That(memoryContents(314), Equals("3A:01:00:00")); 
	}
	
	// Your code here
	Spec(TwoThousandTwenty_What){
		Assert::That(memoryContents(2020), Equals("E4:07:00:00")); 
		// Put in the 4 correct values above in place of the xx
	}
	Spec(Zero_What)
	{
		Assert::That(memoryContents(0), Equals("00:00:00:00"));
	}
	Spec(Ten_What)
	{
		Assert::That(memoryContents(10), Equals("0A:00:00:00"));
	}
	Spec(LargeNumber_What)
	{
		Assert::That(memoryContents(12344), Equals("38:30:00:00"));
	}
	Spec(Fifteen_What)
	{
		Assert::That(memoryContents(15), Equals("0F:00:00:00"));
	}
};

int main() {
	// Run all the tests defined above
	return TestRunner::RunAllTests();
}
