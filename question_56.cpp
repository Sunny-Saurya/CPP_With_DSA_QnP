// Find length of the last character

#include <iostream>
#include <string>
using namespace std;

int lengthOfLastChar(string str)
{
    int length = 0;
    bool counting = false;

    for(int i = str.size() - 1; i >= 0; i--)
    {
        if(str[i] != ' '){
            counting = true;
            length++;
        }
        else if(counting){
            break;
        }
    }
    return length;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << lengthOfLastChar(str) << " ";
}