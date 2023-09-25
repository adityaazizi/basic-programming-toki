#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, B, min = 100000, max = -100000;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> B;

        if (B > max)
            max = B;
        if (B < min)
            min = B;
    }

    cout << max << " " << min << endl;

    return 0;
}