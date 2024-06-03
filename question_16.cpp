/*
A
B C
C D E
D E F G
E F G H I
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>n;

    int i = 1;
    // char value = 'A'; 
    while(i<=n)
    {
        int j = 1;
        while (j<=i)        
        {
            cout<<char('A' + i + j - 2)<<" ";
            // value++;
            j++;
        }
        i++;
        cout<<endl;
    }
}