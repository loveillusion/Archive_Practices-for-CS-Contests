#include <bits/stdc++.h>

using namespace std;

int main() {
    string word[10];
    long long cnt=0, cntnum=0, num[10];
    char ch=0;
    while (cnt<=6) {
        cin >> word[cnt];
        ch=word[cnt].at(0);
        if (ch>='A' && ch<='Z') {
            ch+=32;
        }
        word[cnt][0]=ch;

        if (word[cnt]=="one" || word[cnt]=="a" || word[cnt]=="first" || word[cnt]=="another" ) {
            num[cntnum]=1;
            cntnum++;
        } else if (word[cnt]=="two" || word[cnt]=="both" || word[cnt]=="second") {
            num[cntnum]=2;
            cntnum++;
        } else if (word[cnt]=="three" || word[cnt]=="third") {
            num[cntnum]=3;
            cntnum++;
        } else if (word[cnt]=="four") {
            num[cntnum]=4;
            cntnum++;
        } else if (word[cnt]=="five") {
            num[cntnum]=5;
            cntnum++;
        } else if (word[cnt]=="six") {
            num[cntnum]=6;
            cntnum++;
        } else if (word[cnt]=="seven") {
            num[cntnum]=7;
            cntnum++;
        } else if (word[cnt]=="eight") {
            num[cntnum]=8;
            cntnum++;
        } else if (word[cnt]=="nine") {
            num[cntnum]=9;
            cntnum++;
        } else if (word[cnt]=="ten") {
            num[cntnum]=10;
            cntnum++;
        } else if (word[cnt]=="eleven") {
            num[cntnum]=11;
            cntnum++;
        } else if (word[cnt]=="twelve") {
            num[cntnum]=12;
            cntnum++;
        } else if (word[cnt]=="thirteen") {
            num[cntnum]=13;
            cntnum++;
        } else if (word[cnt]=="fourteen") {
            num[cntnum]=14;
            cntnum++;
        } else if (word[cnt]=="fifteen") {
            num[cntnum]=15;
            cntnum++;
        } else if (word[cnt]=="sixteen") {
            num[cntnum]=16;
            cntnum++;
        } else if (word[cnt]=="seventeen") {
            num[cntnum]=17;
            cntnum++;
        } else if (word[cnt]=="eighteen") {
            num[cntnum]=18;
            cntnum++;
        } else if (word[cnt]=="nineteen") {
            num[cntnum]=19;
            cntnum++;
        } else if (word[cnt]=="twenty") {
            num[cntnum]=20;
            cntnum++;
        } else if (word[cnt]=="zero") {
            num[cntnum]=0;
            cntnum++;
        }
        cnt++;
    }
    for (int i=0; i<cntnum; i++) {
        num[i] = (num[i]*num[i])%100;
    }
    sort (num, num+cntnum);
    long long ans=0;
    for (int i=0; i<cntnum; i++) {
        ans+=num[i];
        ans*=100;
    }
    cout << ans/100;
    return 0;
}
