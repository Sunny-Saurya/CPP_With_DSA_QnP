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
    while(i<=n)
    {
        int j = 1;
        char result = 'A' + n - i;
        while (j<=i)        
        {
            cout<<char(result)<<" ";
            result++;
            j++;
        }
        i++;
        cout<<endl;
    }
}