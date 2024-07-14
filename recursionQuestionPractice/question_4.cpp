#include<iostream>
using namespace std;

int sumArray(int *arr, int n)
{
    if(n == 0) return 0;
    if(n == 1) return arr[n-1];
    return arr[n-1] + sumArray(arr, n-1);   
}

int main()
{
    int arr[8] = {12,34,45,56,67,8,90,12};

   cout << "Sum is : " << sumArray(arr, 8) << " ";
}