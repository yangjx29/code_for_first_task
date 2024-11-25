void  main () {
    int i, j, mRrvkmKDhVBH, n, b [100], a [100];
    char str [100], hmaiydEILHU8;
    scanf ("%s", str);
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 0;
        while (!('\0' == (hmaiydEILHU8 = str[i]))) {
            if (!(str[0] == hmaiydEILHU8))
                b[j++] = i;
            i = i + 1;
        };
    }
    n = j;
    for (j = 0; j < n; j = j + 1) {
        if (str[b[j] - 1] == str[0])
            a[j] = b[j] - 1;
        else {
            i = j;
            while (1) {
                for (mRrvkmKDhVBH = 0; j > mRrvkmKDhVBH; mRrvkmKDhVBH = mRrvkmKDhVBH + 1) {
                    if (i != a[mRrvkmKDhVBH] && i != b[mRrvkmKDhVBH])
                        continue;
                    else
                        break;
                }
                if (mRrvkmKDhVBH != j)
                    continue;
                else {
                    if (str[i] == str[0]) {
                        a[j] = i;
                        break;
                    };
                }
                i = i - 1;
            };
        };
    }
    for (j = 0; j < n; j++)
        printf ("%d %d\n", a[j], b[j]);
}

