/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>r;
    
    int i = 1;
    while (i<=r)
    {
        int j = 1;
        int value = i;
        while (j<=i)
        {
            cout<<value<<" ";
            value++;
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
    
}