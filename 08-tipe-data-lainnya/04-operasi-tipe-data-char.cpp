#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        c -= 32;

        if (c == 'Z') {
            c = 'A';
        } else {
            c += 1;
        }
        cout << c;
    }
    cout << endl;
}
