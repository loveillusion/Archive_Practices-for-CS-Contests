#include <bits/stdc++.h>

using namespace std;

int main() {
    int p[4];
    cin >> p[1] >> p[2] >> p[3];
    string ds;
    cin >> ds;
    char ch, temp1, temp2;
    string temp;
    for (int i = 0; i < ds.length(); i++) {
        ch = ds.at(i);
        if (ch == '-' && i!=0 && i!=ds.length()-1) {
            temp1 = ds.at(i - 1);
            temp2 = ds.at(i + 1);
            if ('a' <= temp1 && temp1 <= 'z') {
                //if two sides not same type
                if ('0' <= temp2 && temp2 <= '9') {
                    continue;
                }
                //if two sides are equal or temp2<=temp1
                if (temp1 >= temp2) {
                    continue;
                }
                //creat temp
                for (int c = temp1 + 1; c < temp2; c++) {
                    for (int r=0; r<p[2]; r++) { //for p2
                        if (p[1]==1) { //for p1=1
                            temp += (char) c;
                        } else if (p[1]==2) { //for p1=2
                            temp += (char) (c-32);
                        } else if (p[1]==3) { //for p1=3
                            temp += '*';
                        }
                    }
                }
                //for p3
                if (p[3] == 2) {
                    reverse(temp.begin(), temp.end());
                }
                //erase the - and put in new string
                ds.erase(i, 1);
                ds.insert(i, temp);
                temp.clear();

            } else if ('0' <= temp1 && temp1 <= '9') {
                //if two sides not same type
                if ('a' <= temp2 && temp2 <= 'z') {
                    continue;
                }
                //if two sides are equal or temp2<=temp1
                if (temp1 >= temp2) {
                    continue;
                }
                //creat temp
                for (int c = temp1 + 1; c < temp2; c++) {
                    for (int r=0; r<p[2]; r++) { //for p2
                        if (p[1]==1 || p[1]==2) { //for p1=1,2
                            temp += (char) c;
                        } else if (p[1]==3) { //for p1=3
                            temp += '*';
                        }
                    }
                }
                //for p3
                if (p[3] == 2) {
                    reverse(temp.begin(), temp.end());
                }
                //erase the - and put in new string
                ds.erase(i, 1);
                ds.insert(i, temp);
                temp.clear();
            }
        }
    }
    cout << ds;
    return 0;
}
