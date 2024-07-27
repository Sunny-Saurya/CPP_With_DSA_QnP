#include<iostream>
using namespace std;

int searchSorted(int arr[], int n, int s, int e, int key)
{
    int mid = s + (e - s)/2;

    if(s >= e){
        return -1;
    }
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] > key){
        return searchSorted(arr, n, mid - 1 , e, key);
         
    }

    if(arr[mid] < key){

        return searchSorted(arr, n, s , mid + 1, key);
    }

}

int main()
{
    int n;
    cout << "Enter size : " << " ";
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter target element : " << " ";
    cin >> key;

    int s = 0;
    int e = n - 1;

    int result = searchSorted(arr, n, s, e,key);

    if(result){
        cout<< "Found";
    }
    else{
        cout << "Not Found";
    }
  
}