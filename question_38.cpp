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

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n -1 ;
    int mid = s +  (e - s)/2;

    while(s <= e)
    {
        if(arr[mid]  == mid )
        {
            return mid;
        }
        if(key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s +  (e - s)/2;
    }
    return -1;
}

int findPosition(int arr[], int n, int key)
{
    int pivot = getPivot(arr ,n);
    if(key >= arr[pivot] && key <= arr[n-1])
    {
        return binarySearch(arr , pivot , n-1, key);
    }
    else
    {
        return binarySearch(arr , 0 , pivot - 1 , key);
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array : " << " ";
    cin >> n;

    int arr[100];
    for(int i = 0 ; i  < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element : " << " ";
    cin >> key;

    getPivot(arr, n);
    binarySearch(arr, n, key);
    findPosition(arr, n, key);

}