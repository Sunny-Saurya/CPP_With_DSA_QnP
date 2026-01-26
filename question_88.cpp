class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto num : nums){
            mpp[num]++;
        }

        int countPair = 0;
        int countSingle = 0;

        for(auto &p: mpp){
            countPair += p.second / 2;
            countSingle += p.second % 2;
        }
        return {countPair, countSingle};
    }
};
