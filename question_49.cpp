// Online C++ compiler to run C++ program online

// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).


#include <iostream>
#include<string>

using namespace std;

char changeString(string &str)
{
            cout << "string after increment by one : " << endl;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'z')
        {
            str[i] = 'a';
            cout << str[i] << " ";
        }
        else if(str[i] == 'Z')
        {
            str[i] = 'A';
            cout << str[i] << " ";
        }
        else if(isalpha(str[i]))
        {
            // str[i] = str[i] + 1;
            cout << char(str[i] + 1) << " ";
        }
        else{
            cout << char(str[i]) << " ";
        }
    }
}

int main() {
    string str;
    cout << "Enter string : " << " ";
    getline(cin, str);
    
    cout << "The original string is : " << " ";
    for(int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i] << " ";
    }
    changeString(str);
    
    // cout << "The after increment string is : " << newString << " ";
    
    
}