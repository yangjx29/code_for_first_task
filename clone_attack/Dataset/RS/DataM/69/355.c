int main () {
    int sum [1000];
    int i;
    int j;
    char x [(1608 - 608)];
    char y [1000];
    int len1 = strlen (x);
    int oNp3sn = strlen (y);
    if (!((68 - 67) != len1) && oNp3sn == 1)
        cout << (566 - 566);
    cin >> x >> y;
    {
        i = 0;
        while (1000 > i) {
            sum[i] = 0;
            i = i + 1;
        };
    }
    {
        j = oNp3sn - 1;
        i = len1 - 1;
        while (0 <= i && j >= 0) {
            int k;
            k = x[i] + y[j] - 2 * '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum[len1 - i - 1] += k;
            i = i - 1;
            j = j - 1;
        };
    }
    if (len1 > oNp3sn) {
        for (i = len1 - oNp3sn - 1; 0 <= i; i = i - 1)
            sum[len1 - i - 1] += x[i] - '0';
    }
    else {
        if (len1 < oNp3sn) {
            i = oNp3sn - len1 - 1;
            while (i >= 0) {
                sum[oNp3sn - i - 1] = sum[oNp3sn - i - 1] + y[i] - '0';
                i = i - 1;
            };
        };
    }
    {
        i = 0;
        while (i < (1714 - 715)) {
            if (sum[i] > 9) {
                sum[i + 1] = sum[i + 1] + sum[i] / (336 - 326);
                sum[i] = sum[i] % 10;
            }
            i = i + 1;
        };
    }
    i = 999;
    while (sum[i] == 0)
        i = i - 1;
    for (j = i; j >= 0; j = j - 1)
        cout << sum[j];
    cout << endl;
    return 0;
}

