#include<iostream>
using namespace std;

void getString(string fruits[20], int n)
{
    for(int i = 0 ; i < n; i++)
    {
        cout << fruits[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter size of your string : " << " ";
    cin >> n;

    string fruits[n];

    for(int i = 0; i < n; i++)
    {
        cin >> fruits[i];
    }

    getString(fruits, n);
}