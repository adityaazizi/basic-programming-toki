#include <bits/stdc++.h>
using namespace std;

int N;
bool pernah[10];
int catat[10];

void tulis(int kedalaman) {
    if (kedalaman >= N) {
        bool zigzag = true;
        for (int i = 1; i < N - 1; i++) {
            bool condition1 = (catat[i] > catat[i - 1] && catat[i] > catat[i + 1]);
            bool condition2 = (catat[i] < catat[i - 1] && catat[i] < catat[i + 1]);
            if (!condition1 && !condition2) {
                zigzag = false;
                break;
            }
        }
        if (zigzag) {
            for (int i = 0; i < N; i++) {
                cout << catat[i];
            }
            cout << endl;
        }
    } else {
        for (int i = 1; i <= N; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i;
                tulis(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }
}

int main() {
    cin >> N;

    tulis(0);

    return 0;
}