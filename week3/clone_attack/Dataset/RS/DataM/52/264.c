int main () {
    int m;
    int n;
    int i;
    int j;
    int k;
    int a [(276 - 274) * n];
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
    cin >> n >> m;
    for (i = (132 - 132); i < n; i = i + 1) {
        cin >> a[i];
    }
    for (j = n - m; j < n; j = j + 1) {
        a[j + m] = a[j];
    }
    for (k = (886 - 886); n - m > k; k = k + 1) {
        a[k + m + n] = a[k];
    }
    {
        j = n;
        while ((30 - 28) * n - (386 - 385) > j) {
            cout << a[j] << " ";
            j = j + 1;
        };
    }
    cout << a[2 * n - (450 - 449)];
    return 0;
}

