#include <bits/stdc++.h>

using namespace std;

struct pres
{
    int id = 0;
    string vote;
}; pres p[25];

bool compare(const string& str1, const string& str2) {
    return str1.length() > str2.length() || (str1.length() == str2.length() && str1 > str2);
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> p[i].vote;
        p[i].id=i+1;
    }
    int max=0;
    for (int i=0; i<n; i++) {
        if (compare(p[i].vote, p[max].vote)) {
            max = i;
        }
    }
    cout << p[max].id << endl << p[max].vote;
    return 0;
}
