// Write a C++ program to separate even and odd numbers in an array of integers. Put all even numbers first, and then odd numbers. 

#include<iostream>
using namespace std;

int evenArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }  
}

int oddArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    } 
}
int main()
{
    int n;
    cout << "Enter  size of an array : " << " ";
    cin >> n; 

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    evenArray(arr, n); 
    oddArray(arr , n);
    
}