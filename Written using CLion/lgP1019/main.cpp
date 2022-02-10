#include <bits/stdc++.h>

using namespace std;

int n, len=0;
string word[25];
string start;
int checkword[25];

int overlap(const string& str1, const string& str2) {
    for (int i=1; i<str1.length(); i++) {
        if (str1.substr(str1.length()-i, i)==str2.substr(0, i)) {
            if (str1.substr(str1.length()-i, i)==str2 || str1==str2.substr(0, i)) {
                return 0;
            }
            return i;
        }
    }
    return 0;
}

void dfs(int l, int last) {
    len = max(len, l);
    for (int i=0; i<n; i++) {
        if (overlap(word[last],word[i])>0 && checkword[i]<2) {
            checkword[i]++;
            dfs(l+word[i].length()-overlap(word[last],word[i]), i);
            checkword[i]--;
        }
    }
}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> word[i];
    }
    cin >> start;
    for (int i=0; i<n; i++) {
        if (start[0]==word[i][0]) {
            checkword[i]++;
            dfs(word[i].length(), i);
            checkword[i]--;
        }
    }
    cout << len;
    return 0;
}
