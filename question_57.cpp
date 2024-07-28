// plus one in array

#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int> &arr)
{
    int n = arr.size();
    for( int i  = n -1; i >= 0; i--)
    {
        if(arr[i] < 9)
        {
            arr[i]++;
            return arr;
        }
        arr[i] = 0;
    }
    
    vector<int> ans(n + 1, 0);
    ans[0] = 1;
    return ans;
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> result = plusOne(arr);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}