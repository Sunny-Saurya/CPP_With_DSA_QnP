#include<iostream>
using namespace std;

int NtoOne(int n)
{
    if(n > 0)
    {
        cout << n << " ";
        NtoOne(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter number : " << " ";
    cin >> n;

    NtoOne(n);
}