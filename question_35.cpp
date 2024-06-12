// TRIPLET SUM //

#include<iostream>
using namespace std;

int tripletSum(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for(int z = i + 2; z < n; z++)
            {
                if(arr[i] + arr[j] + arr[z] == element)
                {
                    cout << arr[i] << arr[j]  << arr[z] << " ";
                }
            }
        }   
    }
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

    int element;
    cout << "Enter element: " << " ";
    cin >> element;

    tripletSum(arr, n, element);
    
}