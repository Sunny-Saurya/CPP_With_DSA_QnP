/*
1
2 1
3 2 1
4 3 2 1
*/

/* #include<iostream>
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
            value--;
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
} */

//-----------------------without using external variable -----------------------

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
        while (j<=i)
        {
            cout<<i-j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
}