// FIND THE PIVOT ELEMENT IN AN ARRAY : 

#include<iostream>
using namespace std;

int getPivot(int arr [], int n)
{
    int s = 0;
    int e = n-1;

    int mid = s + (e - s)/2;

    while(s < e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    mid =  s + (e - s )/2;
    }
    return s;
}

int main()
{
    int n;
    cout << "Enter the size of an array : " << " ";
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int ans = getPivot(arr , n);
    cout << "The pivot in the given array is : " << ans << " ";
}