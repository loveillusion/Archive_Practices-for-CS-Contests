#include <iostream>
#include <stack>

using namespace std;

stack<char> st;

int solve(const string s) {
    for (int i = 0; i < s.length(); i++) {
        if(s[i]=='(' || s[i]=='[') {
            st.push(s[i]);
        } else if(st.empty()) {
            return 0;
        } else if(s[i]==')' && st.top()=='(') {
            st.pop();
        } else if(s[i]==']' && st.top()=='[') {
            st.pop();
        } else {
            return 0;
        }
    }
    return 1;
}

void clearstack() {
    while(!st.empty()) {
        st.pop();
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(solve(s))
            cout << "Yes";
        else
            cout << "No";
        //puts("");
        //cout << s;
        puts("");
        clearstack();
    }
    return 0;
}