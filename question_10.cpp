/*
A A A A 
B B B B
C C C C 
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
        while (j<=n)        
        {
            cout<<char('A'+i-1)<<" ";
            j++;
        }
        i++;
        cout<<endl;

        
    }
}