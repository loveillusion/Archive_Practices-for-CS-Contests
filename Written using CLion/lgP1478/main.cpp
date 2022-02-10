#include <bits/stdc++.h>

using namespace std;

int n, s, a, b, ans=0;
int xi[5002], yi[5002];

int main() {
    cin >> n >>s;
    cin >> a >>b;
    for (int i=1; i<=n; i++) {
        cin >> xi[i] >> yi[i];
    }
    for(int i=1;i<n;i++)//bubbleSort
        for(int j=i+1;j<=n;j++){
            if(yi[i]>yi[j]){
                int t1=xi[i],t2=yi[i];
                xi[i]=xi[j],yi[i]=yi[j];
                xi[j]=t1,yi[j]=t2;
            }
        }
    for(int i=1;i<=n;i++){
        if(xi[i]<=a+b && yi[i]<=s){
            s-=yi[i];
            ans++;
        }
    }
    cout << ans;
    return 0;
}
