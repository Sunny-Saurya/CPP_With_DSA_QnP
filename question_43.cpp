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

double morePrecision(int key, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i<precision; i++)
    {
        factor = factor /10;

        for(double j = ans ; j*j < key; j = j+factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{

    int key;
    cout << "Enter any key : " << " ";
    cin >> key;

    int tempSol = sqrtNum(key);
    cout << "The square root of given number is : " << morePrecision(key, 3, tempSol) << " ";
}