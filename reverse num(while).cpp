#include <iostream>
using namespace std;

int main()
 {
    int num, rev = 0;
    cout << "Enter number: ";
    cin >> num;

    while (num != 0)
	{
        int digit = num % 10; // last digit
        rev = rev * 10 + digit; // add to reverse
        num /= 10;
    }
    cout << "Reverse = " << rev;
    return 0;
}
