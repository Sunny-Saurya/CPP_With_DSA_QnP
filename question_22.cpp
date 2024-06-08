// find unique element.

#include<iostream>
using namespace std;

int UniqueElement(int arr[], int n)
{
    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of an array: " << " ";
    cin>>n;

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = UniqueElement ( arr, n);
    cout << "The unique element is " << result << " ";


}