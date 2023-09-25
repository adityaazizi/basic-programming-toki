#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100], i = 0;

    while (cin >> arr[i]) {
        i++;
        continue;
    }

    for (i = i - 1; i >= 0; i--)
        cout << arr[i] << endl;

    return 0;
}
