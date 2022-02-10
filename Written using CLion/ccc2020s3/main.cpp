#include <bits/stdc++.h>
#define MAX 200005

using namespace std;

string n, h;
int ans = 0;
map<string, int> m;

// This function returns true if contents of arr1[] and arr2[]
// are same, otherwise false.
bool compare(char arr1[], char arr2[])
{
    for (int i=0; i<MAX; i++)
        if (arr1[i] != arr2[i])
            return false;
    return true;
}

// This function search for all permutations of pat[] in txt[]
void search(char *pat, char *txt)
{
    int M = strlen(pat), N = strlen(txt);

    // countP[]:  Store count of all characters of pattern
    // countTW[]: Store count of current window of text
    char countP[MAX] = {0}, countTW[MAX] = {0};
    for (int i = 0; i < M; i++)
    {
        (countP[pat[i]])++;
        (countTW[txt[i]])++;
    }

    // Traverse through remaining characters of pattern
    for (int i = M; i < N; i++)
    {
        // Compare counts of current window of text with
        // counts of pattern[]
        if (compare(countP, countTW)) {
            //cout << "Found at Index " << (i - M) << endl;
            ans++;
        }

        cout << countTW << endl;

        // Add current character to current window
        (countTW[txt[i]])++;

        // Remove the first character of previous window
        countTW[txt[i-M]]--;
    }

    // Check for the last window in text
    if (compare(countP, countTW)) {
        //cout << "Found at Index " << (N - M) << endl;
        ans++;
    }
}

/* Driver program to test above function */
int main()
{
    cin>>n;
    cin>>h;
    char txt[h.length()+1];
    strcpy(txt, h.c_str());
    char pat[n.length()+1];
    strcpy(pat, n.c_str());
    search(pat, txt);
    cout<<ans;
    return 0;
}