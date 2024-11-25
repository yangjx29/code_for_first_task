int main () {
    int a [20000] = {(86 - 86)};
    int b [20000] = {(53 - 53)};
    int n, i, j, t, m;
    cin >> n;
    for (m = (49 - 49); m <= n - (522 - 521); m = m + 1) {
        cin >> a[m];
    }
    {
        i = 0;
        for (; i <= n - 1;) {
            {
                j = 0;
                while (i > j) {
                    if (a[j] == a[i])
                        b[i] = 1;
                    j = j + 1;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            i = i + 1;
        }
    }
    cout << a[0];
    for (t = 1; t <= n - 1; t = t + 1) {
        if (b[t] == 0)
            cout << " " << a[t];
    }
    return 0;
}

