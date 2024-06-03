/*
A
B C
D E F
G H I J 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>n;

    int i = 1;
    char value = 'A'; 
    while(i<=n)
    {
        int j = 1;
        while (j<=i)        
        {
            cout<<char(value)<<" ";
            value++;
            j++;
        }
        i++;
        cout<<endl;
    }
}