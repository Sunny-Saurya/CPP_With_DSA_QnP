// HAPPY NUMBER
/*

Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

    Starting with any positive integer, replace the number by the sum of the squares of its digits.
    Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
    Those numbers for which this process ends in 1 are happy.

*/

#include<iostream>
using namespace std;

int isHappyNumber(int n)
{
    int rem = 0;
    int rev;
    int sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem;
        n = n / 10;

    }
    if(sum == 1)
    {
        cout << "YEs, this is happy number";
    }
    else{
        cout << "No, this is not a happy number";
    }
}
int main()
{
    int n;
    cout << "Enter any number to check : " << " ";
    cin >> n;

    isHappyNumber(n);
}