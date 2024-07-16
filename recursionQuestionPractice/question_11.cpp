#include<iostream>
using namespace std;

int stringLength(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }
    return 1 + stringLength(str + 1);
}

int main()
{
    char str[] = "Sunnu kumar";
    cout << "Length of string is: " << stringLength(str) << endl;
}