// check wheather the string is palidrome or not

#include<iostream>
using namespace std;

bool checkPalidrome(string str, int s, int e)
{

    if(s > e) return true;

    if(str[s] == str[e]) return true;

    return checkPalidrome(str, s+1, e-1);
}

int main()
{
    string str;
    cout << "Enter your string : " << " ";
    getline(cin, str);

    int s = 0;
    int e = str.length()-1;

    int ans = checkPalidrome(str,s,e);

    if(ans){
        cout << "String is palidrome" << endl;
    }
    else{
        cout << "String is not palidrome" << endl;
    }



}