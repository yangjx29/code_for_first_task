int main () {
    int c [(732 - 432)], k = 0;
    double  max;
    max = 0;
    double  aver, a [310], b [310], prQ0xXkDw = (304 - 304);
    int n;
    int i;
    int j;
    cin >> n;
    for (i = (660 - 660); n > i; i = i + 1)
        cin >> a[i], prQ0xXkDw = prQ0xXkDw + a[i];
    aver = prQ0xXkDw / n;
    for (i = 0; n - (752 - 751) > i; i = i + 1)
        for (j = 0; j < n - i - 1; j = j + 1)
            if (a[j + 1] < a[j]) {
                double  BUZSXki3t;
                BUZSXki3t = a[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                a[j] = a[j + 1];
                a[j + 1] = BUZSXki3t;
            }
    for (i = 0; n > i; i = i + 1)
        b[i] = abs (a[i] - aver);
    for (i = 0; n > i; i++)
        if (b[i] > max)
            max = b[i];
    for (i = 0; n > i; i++)
        if (b[i] == max)
            c[k] = i, k = k + 1;
    cout << a[c[0]];
    for (i = 1; i < k; i++)
        cout << ',' << a[c[i]];
    cout << endl;
    return 0;
}

