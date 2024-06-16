#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of an array : " << " ";
    cin >> n;

    int arr[100];

    for(int i  = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum is = " << sum;

}
