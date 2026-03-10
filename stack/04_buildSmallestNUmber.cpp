#include<bits/stdc++.h>
using namespace std;

string buildLowestNumber(string s, int k) {
    // code here.
    string result = "";
        stack<char>st;
        int n = s.size();
        
        for(int i = 0; i < n; i++){
            while(!st.empty() && k > 0 && st.top() - '0' > s[i] - '0'){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        while(k > 0){
            st.pop();
            k--;
        }
        
        if(st.empty()) return "0";
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        // remove leading zerros
        while(result.size() != 0 && result.back() == '0'){
            result.pop_back();
        }
        
        reverse(result.begin(), result.end());
        if(result.empty()) return "0";
        return result;
};

int main(){
    string s;
    int k;
    cin >> s >> k;
    cout << buildLowestNumber(s, k) << endl;
    return 0;
}