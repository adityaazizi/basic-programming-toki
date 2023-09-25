#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int arr[M][N];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--)
            cout << arr[j][i] << " ";
        cout << endl;
    }

    return 0;
}