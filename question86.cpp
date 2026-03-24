// Longest common prefix
// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>str = {"flower", "flow", "flight"};
    string prefix = str[0];
    for(int i = 1; i < str.size(); i++){
        while(str[i].find(prefix) != 0){
            prefix.pop_back();
            if(prefix == "" ) cout << " # " << endl;
        }
    }
    cout << prefix << " ";
}