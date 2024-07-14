#include <iostream>
using namespace std;

// Function Definition of findMean function
float findMean(int A[], int N)
{
    if (N == 1)
        return (float)A[N - 1];
    else
        return ((float)(findMean(A, N - 1) * (N - 1) + A[N - 1]) /N);
}

// Main Calling Function
int main()
{
    int N;
    cout << "Enter size: " << " ";
    cin >> N;

    int A[100];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter element " << i + 1 << ": " << " ";
        cin >> A[i];
    }

    float Mean = 0;
    cout << "The mean of the given array is = " << findMean(A, N);
    return 0;
}