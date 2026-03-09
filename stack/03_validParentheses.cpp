#include<bits/stdc++.h>
using namespace std;  

bool check(char c, char top){
    if(c == '(' && top == ')' || c == '{' && top == '}' || c == '[' && top == ']') return true;
    else false;
};

bool solve(string &s){

    stack<char>st;

    for(char ch : s){
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{

            if(st.empty()) return false;
            char top = st.top();

            if(check(top, ch)){
                st.pop();
            }
            else{
                return false;
            }

        }
    }
    return st.empty();
};

int main(){
   
    string s = "({[]})))";

    cout << (solve(s) ? "True" : "False");

    return 0;
}