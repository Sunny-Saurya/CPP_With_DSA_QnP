#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of the first array: ";
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "Enter size of the second array: ";
    cin >> m;

    int brr[100];

    for(int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    int crr[n+m];

    // Copy the elements from the first array to the merged array
    for(int i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }

    // Copy the elements from the second array to the merged array
    for(int i = 0; i < m; i++)
    {
        crr[n + i] = brr[i];
    }

    // Print the merged array
    cout << "Merged array: ";
    for (int i = 0; i < n+m; i++) {
        std::cout << crr[i] << " ";
    }
    std::cout << std::endl;

    for(int i = 0; i<n+m; i++)
    {
        for(int j = i + 1; j < n + m; j++)
        {
            if(crr[i] > crr[j])
            {
                int temp = crr[i];
                crr[i] = crr[j];
                crr[j] = temp;
            }
        }
    }

    cout << "sorted array: ";
    for (int i = 0; i < n+m; i++) {

        cout << crr[i] << " ";
    }
}