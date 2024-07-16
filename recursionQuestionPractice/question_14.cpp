#include<iostream>
using namespace std;

int fiboNumber(int n)
{
    if(n == 0 ) return 0;
    if(n == 1) return 1;
    return fiboNumber(n-2) + fiboNumber(n-1);
}

int main()
{
    int n;
    cout << "Enter number of terms : " << " ";
    cin >> n;


    cout << "The ans is : " << fiboNumber(n) << " ";
}