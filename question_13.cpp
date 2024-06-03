/*
A B C D 
B C D E 
C D E F 
D E F G  
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
        while (j<=n)        
        {
            cout<<char('A'+i+j-2)<<" ";
            j++;
        }
        i++;
        cout<<endl;

        
    }
}