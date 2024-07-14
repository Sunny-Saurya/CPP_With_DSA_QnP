#include<iostream>
using namespace std;

void reverseString(string str)
{
    if(str.size()  == 0)
    {
        return;
    }
    // The str.substr function in C++ is used to extract a substring from a given string. It takes two optional arguments: the starting index and the length of the substring. If only the starting index is provided, it extracts the substring from that index to the end of the string.
    
    reverseString(str.substr(1)); 
    cout << str[0];
}

int main()
{
    string str;
    cout << "Enter string : " << " ";
    getline(cin,str);

    reverseString(str);
}