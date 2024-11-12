void  aj2Mgofe7db0 (int a [], int l, int r) {
    int t;
    int i;
    int j;
    j = r;
    t = a[l];
    i = l;
    do {
        while (i < j && a[j] <= t)
            j = j - 1;
        if (i < j) {
            a[i] = a[j];
            i = i + 1;
            for (; j > i && a[i] >= t;)
                i = i + 1;
            if (i < j) {
                a[j] = a[i];
                j = j - 1;
            };
        };
    }
    while (i < j);
    j = j - 1;
    a[i] = t;
    i = i + 1;
    if (i < r)
        aj2Mgofe7db0 (a, i, r);
    if (l < j)
        aj2Mgofe7db0 (a, l, j);
}

int r (int a, int b) {
    if (a > b)
        return -200;
    else if (!(b != a))
        return (360 - 360);
    else
        return 200;
}

void  main () {
    int fQ3uMV2F, i, j, max, t;
    int f [2] [1001];
    int a [1000];
    int b [1000];
    scanf ("%d", &fQ3uMV2F);
    for (; fQ3uMV2F != 0;) {
        max = ~0u >> 1 ^ ~0u;
        t = 0;
        {
            i = 0;
            while (i < fQ3uMV2F) {
                scanf ("%d", &b[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < fQ3uMV2F) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        aj2Mgofe7db0 (a, 0, fQ3uMV2F - (188 - 187));
        aj2Mgofe7db0 (b, 0, fQ3uMV2F - (766 - 765));
        {
            j = 0;
            while (j <= fQ3uMV2F) {
                f[0][j] = 0;
                f[1][j] = 0;
                j = j + 1;
            };
        }
        {
            i = 1;
            while (i <= fQ3uMV2F) {
                t = 1 - t;
                {
                    j = 0;
                    while (j <= i) {
                        if (j == 0)
                            f[t][j] = f[1 - t][j] + r (a[i - 1], b[fQ3uMV2F - i + j]);
                        else {
                            if (i == j)
                                f[t][j] = f[1 - t][j - 1] + r (a[i - 1], b[j - 1]);
                            else
                                f[t][j] = MAX (f[1 - t][j] + r (a[i - 1], b[fQ3uMV2F - i + j]), f[1 - t][j - 1] + r (a[i - 1], b[j - 1]));
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i <= fQ3uMV2F) {
                if (f[t][i] > max)
                    max = f[t][i];
                i = i + 1;
            };
        }
        scanf ("%d", &fQ3uMV2F);
        printf ("%d\n", max);
    };
}

