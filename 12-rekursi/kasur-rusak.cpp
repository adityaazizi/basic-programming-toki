#include <bits/stdc++.h>
using namespace std;

bool palindrom(string S, int a, int b) {
    if (a < b) {
        if (S[a] == S[b])
            return palindrom(S, a + 1, b - 1);
        else
            return false;
    }
    return true;
}

int main() {
    string S;
    cin >> S;

    int a = 0, b = S.length() - 1;

    if (palindrom(S, a, b) == true)
        cout << "YA" << endl;

    else
        cout << "BUKAN" << endl;

    return 0;
}