#include<iostream>
using namespace std;

void reverse(string &str, int s, int e)
{

    if(s >= e)
    {
        return;
    }
    swap(str[s], str[e]);
    
    // recursive process

    
    reverse(str,++s, --e);
}

int main()
{
    string str;
    cout << "Enter string : " << " ";
    getline(cin, str);

    int s = 0; 
    int e = str.size() - 1;

    reverse(str,s,e);

    cout << str << endl;
}