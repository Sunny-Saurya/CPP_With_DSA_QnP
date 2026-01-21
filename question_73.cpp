#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int precedence(char ch){
        if(ch == '^') return 3;
        else if(ch == '*' || ch == '/') return 2;
        else if(ch == '+' || ch == '-') return 1;
        else return 0;
    }

public:
    string infixToPrefix(string s) {

        // Step 1: Reverse and swap brackets
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') s[i] = ')';
            else if(s[i] == ')') s[i] = '(';
        }

        // Step 2: Infix to postfix
        string output = "";
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            char ch = s[i];

            if ((ch >= 'a' && ch <= 'z') || 
                (ch >= 'A' && ch <= 'Z') || 
                (ch >= '0' && ch <= '9')) {
                output += ch;
            }

            else if (ch == '('){
                st.push(ch);
            }

            else if(ch == ')'){
                while(!st.empty() && st.top() != '('){
                    output += st.top();
                    st.pop();
                }
                st.pop();
            }

            else{
              
                
                // operators are there
                if(ch == '^'){
                        while(!st.empty() && precedence(ch) <= precedence(st.top())){
                            output += st.top();
                            st.pop();
                        }
                    }

                else{
                    while(!st.empty() &&  precedence(ch) < precedence(st.top())){
                         output += st.top();
                         st.pop();
                    }
                }
                st.push(ch);
            
            }
        }

        while(!st.empty()){
            output += st.top();
            st.pop();
        }

        // Step 3: Reverse postfix → prefix
        reverse(output.begin(), output.end());
        return output;
    }
};