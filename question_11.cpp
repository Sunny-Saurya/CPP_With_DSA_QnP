/*
A B C D
A B C D
A B C D
A B C D 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        char value = 'A';
        while (j<=n)        
        {
            cout<<char(value )<<" ";
            value++;
            j++;
        }
        i++;
        cout<<endl;

        
    }
}