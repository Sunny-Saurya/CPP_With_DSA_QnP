#include<iostream>
using namespace std;

int decimalToBinary(int n)
{
    if(n == 0)
    {
        return 0 ;
    }
    
    int binary =  (n % 2) + 10 * (decimalToBinary(n/2));
    return binary;
}

int main()
{
    int decimalNumber;
    cout << "Enter your decimal number : " << " ";
    cin >> decimalNumber;

    if(decimalNumber < 0)
    {
        cout << "Enter a valid decimal number (non - nagetive number) : " << " ";
    }

    else
    {
        cout << "Binary digit is = " << decimalToBinary(decimalNumber);
    }
}