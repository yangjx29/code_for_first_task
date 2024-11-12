int main () {
    int a [120], b [120], i, n, m;
    int *p1 = &a[(583 - 582)];
    int *p = &b[1];
    cin >> n >> m;
    for (i = (770 - 769); n >= i; i = i + 1)
        cin >> a[i];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = (622 - 621); n - m >= i; i = i + 1, p1 = p1 + 1)
        b[m + i] = *p1;
    for (i = 1; i <= m; i++)
        b[i] = a[n - m + i];
    for (i = 1; i < n; i++, p++)
        cout << *p << " ";
    cout << *p;
    return 0;
}

