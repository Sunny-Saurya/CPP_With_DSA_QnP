// PAIR SUM.

#include<iostream>
using namespace std;

int pairSum (int arr[], int n, int element)
{
   
    for(int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == element)
            {
                cout << arr[i] << arr[j] << " ";
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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int element;
    cout <<"Enter element : " << " ";
    cin >> element;
    
    pairSum(arr, n, element); 
}