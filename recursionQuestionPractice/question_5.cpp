#include<iostream>
using namespace std;

int sumNaturalNumber(int n)
{
    if(n > 0)
    {
        return n + sumNaturalNumber(n-1);
        // cout << n << " ";
    }
}

int main()
{
    int n;
    cout <<"Enter any number : " << " ";
    cin >> n;

    cout << "Sum is : " << sumNaturalNumber(n) << " ";
}