// palindrome string

#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    int i = 0, j = s.size() -1;

    while(i < j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    string str = "sunny";
    if(palindrome(str)){
        cout << "Yes, this is Palindrome string !!";
    }
    else{
        cout << "Not, Palindrome !!";
    }
}