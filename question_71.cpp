#include<bits/stdc++.h>
using namespace std;

// Sieve of Eratosthenes

void allPrimeTillNumber(int n, vector<int>&ans){
    vector<int>primes(n+1);

    for(int i = 2; i < n; i++) primes[i] = 1;

    for(int i = 2; i < n; i++){
        if(primes[i] == 1){
            for(int j = i* i; j < n; j += i){
                primes[j] = 0;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(primes[i] == 1){
            ans.push_back(i);
        }
    }
    
}

int main(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    vector<int>ans;
    allPrimeTillNumber(number,ans);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}