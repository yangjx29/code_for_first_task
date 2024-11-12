int main () {
    int n;
    int m;
    int i;
    int j;
    int t;
    int a [100];
    cin >> n >> m;
    for (i = (874 - 874); n > i; i = i + 1)
        cin >> a[i];
    for (i = (920 - 920); m > i; i = i + 1) {
        t = a[i];
        a[i] = a[n - m + i];
        for (j = n - m + i; i < j; j--) {
            if (!(i + 1 != j))
                a[j] = t;
            else
                a[j] = a[j - 1];
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (i == 0)
            cout << a[i];
        else
            cout << ' ' << a[i];
    }
    return 0;
}

