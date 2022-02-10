#include <bits/stdc++.h>
#define MAXSIZE 10500

using namespace std;

string a, b;
int na[MAXSIZE], nb[MAXSIZE], ans[MAXSIZE];
bool neg;

int main() {
    cin >> a >> b;

    if((a < b && a.size() == b.size()) || a.size() < b.size())
    {
        swap(a, b);
        neg = true;
    }
    //if a<b
    for(int i = a.size(); i > 0; i--)
        na[i] = a[a.size() - i] - '0';
    for(int i = b.size(); i > 0; i--)
        nb[i] = b[b.size() - i] - '0';
    //convert strings to arrays with correct position
    int time = max(a.size(), b.size());
    //find the larger size as the loop time
    for(int i = 1; i <= time; i ++)
    {
        if(na[i] < nb[i])
        {
            na[i+1]--;
            na[i]+=10;
        }
        ans[i] = na[i] - nb[i];
    }
    //do the minus stuff
    while(ans[time] == 0)
        time--;
    //防止减后降位，多输出若干0

    if(neg == true)cout << "-";
    //b>a时，a - b < 0 所以打上负号

    for(int i = time; i > 0; i--)
        cout << ans[i];
    //loop through and output
    if(time < 1)
        cout << "0";
    //if the answer is 0
    return 0;
}
