#include <cstdio>
#include <cstring>

using namespace std;

char c[100050];
int next[100050];
int cur, last;

int main() {
    while (scanf("%s", c+1)==1) {
        int len = strlen(c+1);
        cur = last = 0;
        next[0]=0;

        for (int i=1; i<=len; i++) {
            if (c[i]=='[') {
                cur = 0;
            } else if (c[i]==']') {
                cur = last;
            } else {
                next[i] = next[cur];
                next[cur]=i;
                if(cur==last) last = i;
                cur=i;
            }
        }

        for (int i=next[0]; i!=0; i=next[i]) {
            printf("%c", c[i]);
        }
        puts("");
    }
    return 0;
}