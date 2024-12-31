#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int findValue(string s)
    {
        int res = 0, i = 0;
        while(i < s.size())
        {
            // checking if non- numeric then return size
            if(s[i] < '0' || s[i] > '9') return s.size();
            // if numeric then  convert char to numeric value
            res = res * 10 + s[i++] - '0';
        }
        return res;
    }
public:
    int maximumValue(vector<string>& strs) {
        
        int ans = 0;
        for(auto i : strs)
        {
            ans = max(ans, findValue(i));
        }

        return ans;
    }
};