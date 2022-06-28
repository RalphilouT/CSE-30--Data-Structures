#include <iostream>
#include <Functions.h>
using namespace std;

int main(){
    int answer;
    int answer1;
    cout << "Enter a number to determine if it is even: ";
    cin >> answer;
    if (even(answer) == 1)
    {
        cout << answer << " is determined to be even" << endl;
    }
    else
    {
        cout << answer << " is determined to be odd" << endl;
    }
    cout << "Enter a number to determine the sum up to the entered number: ";
    cin >> answer1;
    if (sum(answer1) == 0)
    {
        cout << "Only positive number will be calculated" << endl;
    }
    else{
        cout << answer1 << " sum is " << sum(answer1) << endl;
    }
    return 0;
}
