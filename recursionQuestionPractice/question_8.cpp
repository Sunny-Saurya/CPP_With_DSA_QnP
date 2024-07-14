#include <iostream>
using namespace std;

int sumOfDigit(int n)
{
    int lastDigit = n % 10;

    if (n > 0)
    {
        return lastDigit + sumOfDigit(n/10);
    }
}

int main()
{
    int n;
    cout << "Enter any number : " << " ";
    cin >> n;

    cout << "Sum of digits : " << sumOfDigit(n);
}