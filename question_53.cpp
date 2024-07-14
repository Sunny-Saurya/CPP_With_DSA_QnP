#include<iostream>
using namespace std;

void merge(int *arr, int s , int e)
{
    int mid = s  + (e - s)/2;

    // finding the lenght of left part of array
    int len1 = mid -s  + 1;

    // finding the lenght of right part of array
    int len2 = e - mid;


    // create an array to copy element of left and right part of an array.
    int *first = new int[len1];
    int *second = new int[len2];

    // now we have to copy the array of left part into first array.
    
    int mainArrayIndex =  s;

    for(int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    // now we have to copy the array of right part into second array

    mainArrayIndex = mid + 1;

    for(int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // now we have to merge the both array. first + second arrray

    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }

        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }


    delete[] first;
    delete[] second;
    
}

void mergeSort(int *arr, int s , int e)
{
    if(s >= e) return;

    int mid = s + (e - s)/2;

    mergeSort(arr , s , mid);
    mergeSort(arr , mid + 1 , e);

    merge(arr, s, e);
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

    int s = 0;
    int e = n -1;

    mergeSort(arr, s, e);

    // printing the sorted array

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<  " ";
    }
}