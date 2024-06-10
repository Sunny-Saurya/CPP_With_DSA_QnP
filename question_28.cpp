#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any size of an array : " << " ";
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << " The sorted array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << " Array after removing duplicates: " << endl;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            cout << arr[i] << " ";
        }
    }
}