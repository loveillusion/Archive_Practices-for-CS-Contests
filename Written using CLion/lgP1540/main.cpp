#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int p[n];
    vector<int> v;
    int ans=0;
    for (int i=0; i<n; i++) {
        cin >> p[i];
    }
    for (int i=0; i<n; i++) {
        if (find(v.begin(), v.end(), p[i]) == v.end()) { // 如果不在内存中
            v.push_back(p[i]); // 加入内存
            ans++;
        }
        if (v.size() > m) // 内存满了
            v.erase(v.begin()); // 把第一个单词删掉
    }
    cout << ans;
    return 0;
}
