#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100];
int x[100];

void in() {
    cout << "(";
    for (int i = 1; i <= k; i++) {
        cout << a[x[i]];
        if (i < k) cout << " ";
    }
    cout << ")\n";
}

void Try(int i) {
    for (int j = x[i - 1] + 1; j <= n - k + i; j++) {
        x[i] = j;

        if (i == k) in();
        else Try(i + 1);
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    cout << "()\n";

    for (k = 1; k <= n; k++) {
        x[0] = 0;
        Try(1);
    }

    return 0;
}
