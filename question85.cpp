// Remove duplicates

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "sunny";
    // space comp - O(n);
    // set<char>s;
    // for(char ch : str){
    //     s.insert(ch);
    // }
    // while(!s.empty()){
    //     char ch = *s.begin();
    //     cout << ch;
    //     s.erase(ch);
    // }

    vector<bool>seen(26, false);
    string ans = "";

    for(char ch : str){
        if(!seen[ch - 'a']){
            ans += ch;
            seen[ch - 'a'] = true;
        }
    }

    cout << ans;
}