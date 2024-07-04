// 6. Write a C++ program to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once. 

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int checkEg(string &str)
{
    int e1;
    int g1;
    int count  = 0;
    
    for(int i = 0 ; i < str.length(); i++)
    {
        if(str[i] == 'e' && str[i+2] == 'g')
        {
            count++;
        }
    }
    return count;
  
}
int main()
{
    string str;
    getline(cin , str);
    
    cout << checkEg(str) << endl;
}