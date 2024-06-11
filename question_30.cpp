// Write a C++ program to find the most frequent element in an array of integers

#include<iostream>
using namespace std;

int mostFrequent(int arr[], int n)
{
    cout << endl;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            cout <<"The  most frequent element is : " << arr[i] << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of an array : " << " ";
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    mostFrequent(arr , n);
}