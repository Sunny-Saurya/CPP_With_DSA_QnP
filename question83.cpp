// Check Anagram
#include<bits/stdc++.h>
using  namespace std;

int main(){
    string str1 = "sunnnnuy";
    string str2 = "ynnnnuns";

    if(str1.size() != str2.size()){
         cout << "Not Anagram !!";
         return 0;
    }

    vector<int>freq(26,0);
    for(int i = 0; i < str1.size(); i++){
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }
    for(int i = 0; i < freq.size(); i++){
        if(freq[i] != 0){
            cout << "Not an Anagram";
            return 0;
        }
    }
    cout << "It's an Anagram !!";
}