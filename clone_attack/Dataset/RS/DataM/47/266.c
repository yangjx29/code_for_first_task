int main () {
    int a [100];
    int n, m, fwFUQVY3ft, t, mfZhs7;
    cin >> n;
    {
        fwFUQVY3ft = 0;
        while (n - 1 >= fwFUQVY3ft) {
            cin >> a[fwFUQVY3ft];
            fwFUQVY3ft++;
        };
    }
    {
        fwFUQVY3ft = 0;
        while (n - 1 - fwFUQVY3ft > fwFUQVY3ft) {
            t = a[fwFUQVY3ft];
            a[fwFUQVY3ft] = a[n - 1 - fwFUQVY3ft];
            a[n - 1 - fwFUQVY3ft] = t;
            fwFUQVY3ft++;
        };
    }
    {
        fwFUQVY3ft = 0;
        while (fwFUQVY3ft <= n - 2) {
            cout << a[fwFUQVY3ft] << ' ';
            fwFUQVY3ft++;
        };
    }
    cout << a[n - 1] << endl;
    return 0;
}

