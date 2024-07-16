#include<iostream>
using namespace std;

int maxArray(int *arr, int n)
{
    if(n == 0) return 0;
    if(n == 1) return arr[0];
    return max(arr[n-1] , maxArray(arr, n-1));
}

int main()
{
    int n;
    cout << "Enter size : " << " ";
    cin >> n;

    int arr[100];

    for(int i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Max number is : " << maxArray(arr, n) << " ";
}