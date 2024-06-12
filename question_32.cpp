// FIND THE INTERSECTION BETWEEN TWO ARRAY.

#include<iostream>
using namespace std;

int intersectionArray(int arr[], int brr[], int n, int m)
{
    cout<< endl << "The intersection between these two array is : " << endl;
    
    int flag = 0;
    for(int i = 0; i < n; i++)
    {      
        if(arr[i] == brr[i])
        {
           cout << arr[i] << " ";
        }
        else 
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << "No, interesection element ";
    }
}

int main()
{
    cout << "First array is : " << endl;
    int n;
    cout <<"Enter size of an array : " << " ";
    cin >> n;

    int arr[100];
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Second array is : " << endl;

    int m;
    cout <<"Enter size of second array : " << " ";
    cin >> m;

    int brr[100];

    for(int j = 0; j < m; j++)
    {
        cin >> brr[j];
    }

    cout << endl;

    for(int j = 0; j < m; j++)
    {
        cout << brr[j] << " ";
    }

    intersectionArray(arr, brr, n , m);

}