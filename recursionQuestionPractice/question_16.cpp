#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter any number : " << " ";
    cin >> n;

    cout << "The factorial is : " << fact(n) << endl;
}