#include <iostream>
#include <MemoryStuff.h>
#include <string>
using namespace std;

int main(){
	int x;
	cout << "Enter a integer digit to find it's memory location: ";
	cin >> x;
    string s = memoryContents(x);
	cout << "The location of the integer is: " <<s << endl;
}
