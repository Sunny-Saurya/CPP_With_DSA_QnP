
class Solution {
public:
    int countOdds(int low, int high) {
        // int count = 0;
        // if(low % 2 == 1)
        //     for(int i = low; i <= high; i+= 2){
        //         count++;
        //     }
        // else{
        //     for(int i = low+1; i <= high; i+= 2){
        //         count++;
        //     }
        // }
        // return count;

        int  total = high - low + 1;
        if(low % 2 != 0 && high % 2 != 0) return total / 2 + 1;
        return total/2;
    }
};
