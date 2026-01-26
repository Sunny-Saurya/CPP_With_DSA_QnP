class Solution {
// private:
// long long checkVowels(string str){
//     long long count = 0;
//     for(auto ch : str){
//         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//         count++;
//     }return count;
// }
public:
    long long countVowels(string word) {
        long long ans = 0;

        // it will give TLE

        // for(int i = 0; i < word.size(); i++){
        //     string res = "";
        //     for(int j = i;  j < word.size(); j++){
        //         res += word[j];
        //         ans += checkVowels(res);
        //     }
        // }

        //optimal
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                ans += (long long)(i+1) * (word.size()-i);
            }
        }
        return ans;
    }
};
