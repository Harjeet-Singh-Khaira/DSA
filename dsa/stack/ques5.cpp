#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

//for prefix and postfix we iterate from last to first element and pop two elements when we hit a operator.

int prefixEval(string s){
    stack<int> st;

    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0'&&s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch(s[i]){
                case '+':
                st.push(operand1+operand2);
                break;
                case '-':
                st.push(operand1-operand2);
                break;
                case '*':
                st.push(operand1*operand2);
                break;
                case '/':
                st.push(operand1/operand2);
                break;
                case '^':
                st.push(pow(operand1,operand2));
                break;
                default:
                cout<<"INVALID OPERATOR"<<endl;
            }
        }
    }
    return st.top();
}

int postfixEval(string s){
    stack<int> st;

    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch(s[i]){
                case '+':
                st.push(operand2+operand1);
                break;
                case '-':
                st.push(operand2-operand1);
                break;
                case '*':
                st.push(operand2*operand1);
                break;
                case '/':
                st.push(operand2/operand1);
                break;
                case '^':
                st.push(pow(operand2,operand1));
                break;
                default:
                cout<<"INVALID OPERATOR"<<endl;
            }
        }
    }
    return st.top();
}

int main(){
    string s1 = "-+7*55+30", s2 = "231*+9-";
    cout<<prefixEval(s1)<<endl;
    cout<<postfixEval(s2)<<endl;
}