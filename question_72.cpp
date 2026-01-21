#include<bits/stdc++.h>
using namespace std;

int precedence(char ch){
    if(ch == '^') return 3;
    else if(ch == '*' || ch == '/') return 2;
    else if(ch == '+' || ch == '-') return 1;
    else return 0;
}

// infix to postfix expression 
void infixToPostfix(string s, string &output){

    stack<char>st;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];

        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
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
            while(!st.empty() && precedence(st.top()) >= precedence(ch)){
                if(ch == '^' && st.top() == '^') break;
                output += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
            output += st.top();
            st.pop();
        }
}

int main(){
    string s = "a*(b+c)/d";
    string output = "";
    infixToPostfix(s, output);
    
    cout << output << " ";
}