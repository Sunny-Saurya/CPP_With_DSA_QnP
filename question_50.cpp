// // Online C++ compiler to run C++ program online
#include <iostream>
#include<string>

using namespace std;
string upperCase(string &str)
{
    int i;
    for(i = 0; i < str.length(); i++)
    {
        if(i == 0 || str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
 
    }
    return str;
}
int main() {
    string str;
    cout << "Enter string : " << " ";
    getline(cin, str);
    string updated_string =  upperCase(str);

    cout << "Updated string : " << endl;
    cout << updated_string << " ";
}

