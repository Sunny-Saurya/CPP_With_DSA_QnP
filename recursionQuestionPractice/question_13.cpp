#include<iostream>
using namespace std;

int sumArrayElement(int *arr,int n)
{
    if(n == 0)
    {
        return 0;
    }
    return arr[0] + sumArrayElement(arr + 1, n-1);
}

int main()
{
    int n;
    cout << "Enter size : " << " ";
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The sum of array element is  : " << sumArrayElement(arr,n) << " ";
}