#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int N, Q, arr[2][1001];
    cin >> N;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> Q;

    for (int i = 0; i < Q; i++) {
        char buff1[5], buff2[5];
        int x, y;
        cin >> buff1 >> x >> buff2 >> y;

        int p = buff1[0] - 'A';
        int q = buff2[0] - 'A';
        x--;
        y--;
        swap(arr[p][x], arr[q][y]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j];

            if (j + i < N) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}