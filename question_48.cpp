#include<iostream>
using namespace std;

void reverseString(char str[10], int n)
{
    cout << endl;
    cout << "string after reversing " << endl;
    for(int i = n-1; i >=0; i--)
    {
        cout << str[i] << " ";
    }
}

int main()
{
    char str[10];
    int n = 5;
    
    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    
    cout  << "String before " << endl;
    for(int i = 0; i < n; i++)
    {
        cout  << str[i] << " ";
    }
    
    reverseString(str,n);
}