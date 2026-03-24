// Count frequency of each character

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "sunny";
    vector<int>freq(26, 0);
    for(int i =0 ; i < str.size(); i++){
        freq[str[i] - 'a']++;
    }

    for(int i = 0; i < freq.size(); i++){
        if(freq[i] > 0){
            cout << char(i+'a') << " -> " << freq[i] << endl;
        }
    }
}