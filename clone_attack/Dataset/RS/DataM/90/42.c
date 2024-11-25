int f (int m, int n) {
    if (n > m)
        return f (m, m);
    if (!(1 != m) && n != 0 || !(1 != n) && m != 0)
        return 1;
    if (m == 0 || n == 0)
        return 1;
    if (m >= n)
        return f (m - n, n) + f (m, n - 1);
}

int main () {
    int m;
    int n;
    int t;
    cin >> t;
    while (t = t - 1) {
        cin >> m >> n;
        cout << f (m, n) << endl;
    };
}

