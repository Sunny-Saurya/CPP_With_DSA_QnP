#include <iostream>
using namespace std;

int binaryToDecimalRecursive(int n)
{
    // Base case: when all digits are processed
    if (n == 0)
    {
        return 0;
    }
    else
    {
        // Extract the last digit
        int lastDigit = n % 10;
        
        // Recursive call: calculate the decimal value for the remaining digits
        // and add the contribution of the current digit
        return lastDigit + 2 * binaryToDecimalRecursive(n / 10);
    }
}

int main()
{
    int binaryNumber;
    cout << "Enter your binary number: ";
    cin >> binaryNumber;

    cout << "Decimal equivalent: " << binaryToDecimalRecursive(binaryNumber) << endl;

    return 0;
}
