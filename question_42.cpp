// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

#include <iostream>
using namespace std;

long long int sqrtNum(int key)
{
    int s = 0;
    int e = key;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid ;
        if (square == key)
        {
            return mid;
        }

        if (square < key)
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{

    int key;
    cout << "Enter any key : " << " ";
    cin >> key;

    int ans = sqrtNum(key);
    cout << "The sqrt of given number is : " << ans << " ";
}