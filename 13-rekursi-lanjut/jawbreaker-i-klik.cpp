#include <bits/stdc++.h>
using namespace std;

bool visited[26][26];
int arr[26][26];
int n, m;
int jumlah = 0;

void f(int x, int y, int c) {
    if (x >= 0 && x <= n && y >= 0 && y <= m) {
        if (!visited[x][y]) {
            if (arr[x][y] == c) {
                jumlah += 1;
                visited[x][y] = true;
                f(x + 1, y, c);
                f(x, y + 1, c);
                f(x - 1, y, c);
                f(x, y - 1, c);
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int b, k;
    cin >> b >> k;
    f(b, k, arr[b][k]);
    cout << jumlah * (jumlah - 1);

    return 0;
}