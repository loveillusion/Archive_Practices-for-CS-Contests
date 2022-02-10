#include <bits/stdc++.h>

using namespace std;

struct sunflower {
    int start;
    int end;
    int diff;
}; sunflower s[105], ns[105];

int n;

bool compare(sunflower s1, sunflower s2) {
    return s1.diff < s2.diff;
}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> s[i].start >> s[i].end;
        s[i].diff = s[i].end - s[i].start;
        ns[i].start = s[i].start;
        ns[i].end = s[i].end;
        ns[i].diff = s[i].diff;
    }
    if (n!=2) {
        sort(ns, ns + n, compare);
        bool sm = true;
        for (int i = 0; i < n; i++) {
            if (ns[i].start != s[i].start && ns[i].end != s[i].end) {
                sm = false;
                break;
            }
        }
        if (sm) {
            for (int i = 0; i < n; i++) {
                cout << s[i].start << " " << s[i].end << endl;
            }
        } else {
            for (int i = 0; i < n; i++) {
                cout << ns[i].start << " " << ns[i].end << endl;
            }
        }
    } else {
        if (s[0].start<=s[0].end && s[1].start<=s[1].end) {
            if (s[0].diff <= s[1].diff) {
                cout << s[0].start << " " << s[0].end << endl;
                cout << s[1].start << " " << s[1].end << endl;
            } else {
                cout << s[1].start << " " << s[1].end << endl;
                cout << s[0].start << " " << s[0].end << endl;
            }
        } else {
            if (s[1].end <= s[0].end && s[1].start <= s[0].start) {
                cout << s[1].start << " " << s[0].start << endl;
                cout << s[1].end << " " << s[0].end << endl;
            } else {
                cout << s[0].end << " " << s[1].end << endl;
                cout << s[0].start << " " << s[1].start << endl;
            }
        }
    }
    return 0;
}
