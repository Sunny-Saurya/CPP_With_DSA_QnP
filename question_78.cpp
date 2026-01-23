#include<bits/stdc++.h>
using namespace std;
class Solution {
    void prevSmallerElement(vector<int>&arr, vector<int>&pse){
        int n = arr.size();
        stack<int>st; // storing indexes
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }

            if(!st.empty()){
                pse[i] = st.top();
            }
            else{
                pse[i] = -1;
            }
            st.push(i);
        }
    }

    void nextSmallerElement(vector<int>&arr, vector<int>&nse){
        int n = arr.size();
        stack<int>st; // storing indexes
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }

            if(!st.empty()){
                nse[i] = st.top();
            }
            else{
                nse[i] = n;
            }
            st.push(i);
        }
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        // brute force
        // long long sum = 0;
        // int MOD = 1e9 + 7;
        // for(int i = 0; i < arr.size(); i++){
        //     int smallest = arr[i];
        //     for(int j = i; j < arr.size(); j++){
        //         smallest = min(smallest, arr[j]);
        //         sum = (sum + smallest) % MOD;
        //     }
        // }
        // return (int)sum;

        int n = arr.size();
        const int MOD = 1e9 + 7;
        long long total = 0;

        vector<int>pse(n),nse(n);
        prevSmallerElement(arr, pse);
        nextSmallerElement(arr, nse);

        for(int i = 0; i < n; i++){
            long long left = i - pse[i];
            long long right = nse[i] - i;

            long long contri = (left * right) % MOD * arr[i] % MOD;
            total = (total + contri) % MOD;
        }
        return total;
    }
};