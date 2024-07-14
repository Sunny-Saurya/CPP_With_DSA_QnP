#include<iostream>
using namespace std;

int countToN(int n)
{
    if(n > 0){
        countToN(n - 1);
        cout << n  << " ";
    }

    
}

int main()
{
    int n;
    cout << "Enter size : " << " ";
    cin >> n;

    countToN(n);
}