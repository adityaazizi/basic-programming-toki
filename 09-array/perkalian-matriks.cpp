#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    int A[N][M], B[M][P], C[N][P];

    // input matrix A
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];

    // input matrix B;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < P; j++)
            cin >> B[i][j];

    // C = A * B
    for (int i = 0; i < N; i++)
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;
            for (int k = 0; k < M; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    // matrix C output
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}