#include <bits/stdc++.h>

using namespace std;

struct Student
{
    int id;
    int mark;
}; Student s[5005];

bool compareStudent(Student s1, Student s2) {
    if (s1.mark==s2.mark) {
        return (s1.id<s2.id);
    } else {
        return (s1.mark > s2.mark);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> s[i].id >> s[i].mark;
    }
    sort(s, s+n, compareStudent);
    int pick = (int)m*1.5-1;
    int cnt=0;
    for (int i=0; i<n; i++) {
        if (s[i].mark>=s[pick].mark) {
            cnt++;
        } else {
            break;
        }
    }
    cout << s[pick].mark << " " << cnt << endl;
    for (int i=0; i<cnt; i++) {
        cout << s[i].id << " " << s[i].mark << endl;
    }
    return 0;
}
