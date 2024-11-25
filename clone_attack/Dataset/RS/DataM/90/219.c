int kcs (int m, int n) {
    int cs (int m, int n);
    if (!(2 != n))
        return 1;
    if (3 <= n)
        return cs (m, n - 1);
    return 0;
}

int bkcs (int m, int n) {
    int cs (int m, int n);
    if (m == n)
        return 1;
    if (m > n)
        return cs (m - n, n);
    return 0;
}

int cs (int m, int n) {
    return kcs (m, n) + bkcs (m, n);
}

int main () {
    int x;
    int m;
    int n;
    cin >> x;
    for (int i = 1;
    i <= x; i = i + 1) {
        cin >> m >> n;
        cout << cs (m, n) << endl;
    }
    return 0;
}

