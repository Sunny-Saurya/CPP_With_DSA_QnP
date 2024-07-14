#include <iostream>
#include <vector>
using namespace std;

void decimalToBinary(int n)
{
    vector<int> binary;

    while (n > 0)
    {
        binary.push_back(n % 2);
        n = n / 2;
    }

    // Print the binary number in reverse order
    for (int i = binary.size() - 1; i >= 0; i--)
    {
        cout << binary[i];
    }
    cout << endl;
}

int main()
{
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    if (decimalNumber < 0)
    {
        cout << "Please enter a non-negative number." << endl;
        return 1;
    }

    cout << "Binary representation: ";
    decimalToBinary(decimalNumber);

    return 0;
}
