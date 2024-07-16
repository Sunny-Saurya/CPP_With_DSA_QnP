#include<iostream>
using namespace std;

int sumOfNumber(int num){

    if(num == 0)
    {
        return 0;
    }
    
    int number = num % 10;

    return number + sumOfNumber(num/10);
}

int main()
{
    int num;
    cout << "Enter number : " << " ";
    cin >> num;

    cout << "sum of number is :  " << sumOfNumber(num) << " ";
}