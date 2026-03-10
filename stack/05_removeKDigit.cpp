#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string nums, int k) {
        stack<char>st;
        for(int i = 0; i < nums.size(); i++){
            while(!st.empty() && k > 0 && st.top() - '0' < nums[i] - '0'){
                st.pop();
                k--;
            }
            st.push(nums[i]);
        }

        while(k > 0){
            st.pop();
            k--;
        }

        if(st.empty()) return "0";
        // store the digits in the result;
        string result = "";
        while(!st.empty()){
            result += st.top();
            st.pop();
        }

        // leading zereos;

        while(result.size() != 0 && result.back() == '0'){
            result.pop_back();

        }

        reverse(result.begin(), result.end());
        if(result.empty()) return "0";
        return result;

        
    }
};

int main(){
    string s;
    int k;
    cin >> s >> k;
    Solution sol;
    cout <<  sol.removeKdigits(s, k) << endl;
    return 0;
}