#include <bits/stdc++.h>
using namespace std;
bool valid(string s)
{
    stack<char> st;
    for(auto x : s){
        if(x == '(' || x == '{' || x =='[') st.push(x);
        else if(!st.empty()){
            if(x == ')' && st.top() != '(') return false;
            else if (x == ']' && st.top() != '[') return false;
            else if (x == '}' && st.top() != '{') return false;

            st.pop();
        }
    }

    if(st.empty()) return true;
    else return false;
}
int main()
{
    cout << valid("([ {} ])")<< endl;
    cout << valid("([)]") << endl;
}