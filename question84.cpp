// First non-repeating character
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "sunsunnyy";
    vector<int>freq(26, 0);
    for(int i = 0; i< str.size(); i++){
        freq[str[i] - 'a']++;
    }

    for(char ch : str){
        if(freq[ch - 'a'] == 1){
            cout << ch << endl;
            return 0;
        }
    }
    cout << "###" << endl;
}