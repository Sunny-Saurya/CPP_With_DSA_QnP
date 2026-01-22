#include<bits/stdc++.h>
using namespace std;

void findAllPrime(int n){
    int primes[n+1];
    for(int i = 2; i < n; i++) primes[i] = 1;

    for(int i = 2; i < n; i++){
        if(primes[i] == 1){
            for(int j = i*i; j < n; j += i){
                primes[j] = 0;
            }
        }
    }

    for(int i = 2; i < n; i++){
        if(primes[i] == 1){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cin >> n;

    findAllPrime(n);

}