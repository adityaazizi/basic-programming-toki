#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> data;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        data.push_back(x);
    }
    for (int i = 0; i < N; i++) {
        long long jumlah = 0;
        for (int j = 0; j < N; j++) {
            if (j == i) {
                continue;
            }
            jumlah += data[j];
        }
        cout << jumlah << endl;
    }
}