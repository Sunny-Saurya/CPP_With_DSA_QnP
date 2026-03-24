// reversing string
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "sunny";
    // reverse(str.begin(), str.end());

    int i = 0,j = str.size()-1;
    while(i < j){
        swap(str[i], str[j]);
        i++;
        j--;
    }

    cout <<  str << endl;
}