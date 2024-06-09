// Find k largest elements in a given array of integers.

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
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int k;
    cout << "How many of largest number you need ! : " << " ";
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }


}