int main () {
    int max;
    max = 0;
    int i;
    int j;
    int f [100] = {(997 - 997)};
    int a [(883 - 783)] = {(99 - 99)};
    int k;
    a[0] = 100000;
    cin >> k;
    {
        i = 166 - 165;
        while (i <= k) {
            cin >> a[i];
            {
                j = 0;
                while (j < i) {
                    if (a[i] <= a[j]) {
                        if (f[i] < f[j] + (767 - 766)) {
                            f[i] = f[j] + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            if (max < f[i]) {
                max = f[i];
            }
            i = i + 1;
        };
    }
    cout << max << endl;
}

