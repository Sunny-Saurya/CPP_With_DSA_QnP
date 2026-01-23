#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        // brute force
        long long sum = 0;
        for(int i = 0; i < arr.size(); i++){
            int largest = arr[i];
            int smallest = arr[i];

            for(int j = i+1; j < arr.size(); j++){
                largest = max(largest, arr[j]);
                smallest = min(smallest, arr[j]);
                sum += (largest - smallest);
            }
        }
        return sum;

        // optimal
        
    }
};