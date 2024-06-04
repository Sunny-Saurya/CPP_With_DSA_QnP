// 17. Question of pattern printing
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the number of rowss";
    cin>>n;

    i =  1;
    while(i<=n)
    {
        j = 1;
        while(j<=i)
        {
            cout<<'*';
            j++;
        }
        cout<<"\n";
        i++;
        
    }

    return 0;
}

