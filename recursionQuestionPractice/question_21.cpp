#include<bits/stdc++.h>
using namespace std;

void generateAllBinaryNumberRecursion(string &s, int idx, vector<string>&res){
    int n = s.size();
    if(idx == n){
        res.push_back(s);
        return;
    }


    // assign '0' at current positon
    s[idx] = '0';
    generateAllBinaryNumberRecursion(s, idx+1, res);

    // assign '1' at current positon
    s[idx] = '1';
    generateAllBinaryNumberRecursion(s, idx+1, res);

}

vector<string> generateAllBinaryNumber(int n){

    string s(n, '0');
    vector<string>res;
    generateAllBinaryNumberRecursion(s,0,res);
    return res;
}

int  main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;
    vector<string>ans = generateAllBinaryNumber(n);
    for(auto ch : ans){
        cout << ch << " ";
    }

    cout << endl;
    return 0;
}