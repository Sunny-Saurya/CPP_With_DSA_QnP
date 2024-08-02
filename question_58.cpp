// count number of 1 bit

#include<iostream>
using namespace std;

int countOneBit(int n)
{
    int count = 0;
    while (n > 0)
    {
        if(n & 1)
        {
            count++;
        }

    n>>=1;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter any number : " << " ";
    cin >> n;

    cout<< "Number of one bit is : " << countOneBit(n) <<" ";
}