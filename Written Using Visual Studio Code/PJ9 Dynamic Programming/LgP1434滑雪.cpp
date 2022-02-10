#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int ro, co, mt[105][105], me[105][105], taken[105][105], answer;

int cr[4] = {-1, 0, 1, 0};
int cc[4] = {0, 1, 0, -1};

int dfs(int r, int c) {
    // cout << "Now: " << mt[r][c] << "\n";
    int ans = 1;
    for (int i = 0; i < 4; i++) {
        if (r+cr[i] <= 0 || c+cc[i] <= 0 || r+cr[i] > ro || c+cc[i] > co)
            continue;
        if (mt[r+cr[i]][c+cc[i]] < mt[r][c]) {
            if (taken[r + cr[i]][c + cc[i]])
                ans = max(me[r + cr[i]][c + cc[i]] + 1, ans);
            else
                ans = max(dfs(r + cr[i], c + cc[i]) + 1, ans);
        }
    }
    taken[r][c] = 1;
    me[r][c] = ans;
    return ans;
}

int main() {
    scanf("%d%d", &ro, &co);
    for (int i = 1; i <= ro; i++)
        for (int j = 1; j <= co; j++)
            scanf("%d", &mt[i][j]);
    for (int i = 1; i <= ro; i++)
        for (int j = 1; j <= co; j++)
            answer = max(answer, dfs(i, j));
    printf("%d", answer);
}