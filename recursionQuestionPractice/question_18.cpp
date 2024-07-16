#include<iostream>
using namespace std;

int minArray(int *arr, int n)
{
    if(n == 0) return 0;
    if(n == 1) return arr[0];
    return min(arr[n-1] , minArray(arr, n-1));
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

    cout << "Min number is : " << minArray(arr, n) << " ";
}