#include<bits/stdc++.h>
using namespace std;

void nextGreaterElements(vector<int>& nums, vector<int>& ans) {
    stack<int>st;
    int n = nums.size();
    ans.assign(n, -1);

    for(int i = 2*n - 1; i >= 0; i--){
        int idx = i % n;
        int num = nums[idx];
        while(!st.empty() && num >= st.top()){
            st.pop();
        }
        if(i < n){
            if(!st.empty()){
                ans[idx] = st.top();
            }
            else{
                ans[idx] = -1;
            }

        }
        
        st.push(num);
    }

    
}

int main(){
    int n;
    cout << "Enter size :";
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int>ans;
    nextGreaterElements(arr, ans);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }



}