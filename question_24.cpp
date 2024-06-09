#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array: " << " ";
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN, smax = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i] && arr[i]!= max)
        {
            smax = arr[i];
        }
    }
    cout << "Max number is : " << max << endl;
    cout << "SecMax number is : " << smax << " ";
    return 0;
}