#include <iostream>
#include <string>

using namespace std;

string inorder, postorder, preorder;

void solve(string ino, string posto) {
    if (ino.length()==0) {
        return;
    }
    char root = posto[posto.length() - 1];
    int pos = ino.find(root);
    preorder+=root;
    //cout << "\n" << pos << " " << ino.substr(0, pos) << " " << posto.substr(0, pos);
    solve(ino.substr(0, pos), posto.substr(0, pos));
    solve(ino.substr(pos + 1, ino.length() - pos - 1), posto.substr(pos, ino.length() - pos - 1));
}

int main() {
    cin >> inorder;
    cin >> postorder;
    solve(inorder, postorder);
    cout << preorder;
}