// // swap alternate value of array.

// // arr = [1,2,3,4,5,6] ---> [2,1,4,3,6,5]

#include<iostream>
using namespace std;

int swapAlter(int arr [], int size)
{
    int st = 0;
    int en = 1;

    while(st <= en)
    {
        swap(arr[st],arr[en]);
        st = st + 2;
        en = en + 2;
    }
  
}

int arrPrint(int arr [], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
}
int main()
{
    int n;
    cout<<"Enter the size of an array : "<< " ";
    cin>>n;

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swapAlter(arr, n);
    arrPrint( arr, n);
}

// Another algorithm to solve this 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter  the size : ";
//     cin >> n;

//     int arr[100];

//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for(int i = 0; i < n; i = i+2)
//     {
//         if(i + 1 < n)
//         {
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     cout << endl;
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
// }
