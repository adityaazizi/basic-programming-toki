#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        if (i % K == 0)
            cout << "*"
                 << " ";
        else
            cout << i << " ";
    }
    cout << endl;

    return 0;
}