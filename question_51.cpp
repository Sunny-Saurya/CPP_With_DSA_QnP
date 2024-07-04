// sorting of string 

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string sortString(string &str)
{
    // string sorted;
    for(int i = 0; i < str.length(); i++)
    {
        if(int(str[i]) >= 65 && int(str[i]) <=90 || int(str[i]) >= 97 && int(str[i]) <=122)
        {
            sort(str.begin(),str.end());
        }
        else{
            continue;
        }
    }
    return str;
}
int main()
{
    string str;
    getline(cin , str);
    
    cout << sortString(str) << endl;
}