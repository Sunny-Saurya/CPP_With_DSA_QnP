#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: " << " ";
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    int j;
    for(int i = 0; i < n; i++)
    {
        for(j = n; i >= 0; i--)
        {
            if(arr[i] == arr[j+1])
            {
                count++;
            }
        }   
    }
    if(count > 1)
    {
        cout << "there is a duplicates element exist" << endl;
    }
    else cout << "there is not any duplicates value" << endl;
}