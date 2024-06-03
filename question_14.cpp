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
    while(i<=n)
    {
        // char value = 'A'; 
        int j = 1;
        while (j<=i)        
        {
            cout<<char('A'+i-1)<<" ";
            // value++;
            j++;
        }
        i++;
        cout<<endl;
    }
}