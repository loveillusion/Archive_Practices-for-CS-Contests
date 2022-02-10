#include <bits/stdc++.h>

using namespace std;

int main() {
    int M, N, K, L, D;
    cin >> M >> N >> K >> L >> D;
    int X[D], Y[D], P[D], Q[D];
    int col[N], row[M];
    int colans[N], rowans[M];
    for (int i=0; i<N; i++) {
        col[i]=0;
        colans[i]=i+1;
    }
    for (int i=0; i<M; i++) {
        row[i]=0;
        rowans[i]=i+1;
    }
    for (int i=0; i<D; i++) {
        cin >> X[i] >> Y[i] >> P[i] >> Q[i];
    }
    for (int i=0; i<D; i++) {
        //cout << X[i] << " " << Y[i] << " " << P[i] << " " << Q[i] << endl;
        if(X[i]==P[i]) {
            if (Y[i]<Q[i]) {
                col[Y[i] - 1]++;
                //cout << col[Y[i]-1] << endl;
            }
            else {
                col[Q[i] - 1]++;
                //cout << col[Q[i]-1] << endl;
            }
            //cout << "col+" << endl;
        }
        if(Y[i]==Q[i]) {
            if (X[i]<P[i]) {
                row[X[i] - 1]++;
                //cout << row[X[i]-1] << endl;
            }
            else {
                row[P[i] - 1]++;
                //cout << row[P[i]-1] << endl;
            }
            //cout << "row+" << endl;
        }
    }
    //bubble sort
    for (int i = 0; i < N - 1; i++) { // times
        for (int j = 0; j < N - i - 1; j++) { // position
            if (col[j] > col[j + 1]) {
                int temp = col[j];
                col[j] = col[j + 1];
                col[j + 1] = temp;
                temp = colans[j];
                colans[j] = colans[j+1];
                colans[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < M - 1; i++) { // times
        for (int j = 0; j < M - i - 1; j++) { // position
            if (row[j] > row[j + 1]) {
                int temp = row[j];
                row[j] = row[j + 1];
                row[j + 1] = temp;
                temp = rowans[j];
                rowans[j] = rowans[j+1];
                rowans[j+1]=temp;
            }
        }
    }

    int ilrowans[K], ilcolans[L];
    int cnnnt = 0;
    for (int i=M-1; i>=M-K; i--) {
        ilrowans[cnnnt]=rowans[i];
        cnnnt++;
    }
    cnnnt=0;
    for (int i=N-1; i>=N-L; i--) {
        ilcolans[cnnnt]=colans[i];
        cnnnt++;
    }

    int rn = sizeof(ilrowans)/sizeof(ilrowans[0]);
    int cn = sizeof(ilcolans)/sizeof(ilcolans[0]);
    sort(ilrowans, ilrowans+rn);
    sort(ilcolans, ilcolans+cn);

    for (int i=0; i<K; i++)
        cout << ilrowans[i] << " ";
    cout << endl;
    for (int i=0; i<L; i++)
        cout << ilcolans[i] << " ";
    return 0;
}
