// Peak element in an array :

#include<iostream>
using namespace std;

int PeakElement(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;

    while(s < e)
    {
        if(arr[mid] < arr[mid + 1])
        {
            s = mid  + 1;
        }
        else 
        {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}
int main()
{
    int n;
    cout << "Enter size of an array : " << " ";
    cin >> n;

    int arr[100];

    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = PeakElement(arr , n);
    cout << "The peak element is : " << ans << " ";
}

