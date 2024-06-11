// Write a C++ program to find the second smallest elements in a given array of integers.

#include <iostream>
#include <climits>

using namespace std;

int secMin(int arr[], int n)
{
    int min = INT_MAX;
    int smin = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < min)
        {
            smin = min;
            min = arr[i];
        }
        if (arr[i] > smin && arr[i] != min)
        {
            smin = arr[i];
        }
    }
    cout << "minimum number is : " << min << endl;
    cout << "Second minimum number is : " << smin << " ";
}

int main()
{
    int n;
    cout << "Enter size of an array : " << " ";
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    secMin(arr, n);
}