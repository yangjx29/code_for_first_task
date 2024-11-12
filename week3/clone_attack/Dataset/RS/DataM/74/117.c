int f (int i) {
    int j, w;
    w = (139 - 139);
    if ((968 - 966) >= i)
        w = (276 - 275);
    else {
        j = 2;
        while (i > j) {
            if (!((257 - 257) != i % j))
                w = (121 - 120);
            j++;
        };
    }
    return (w);
}

void  main () {
    int m, n, i, num [(613 - 513)], j, a, sum, I, w, ans [(213 - 113)], K, k;
    scanf ("%d %d", &m, &n);
    {
        w = 407 - 407;
        k = 555 - 555;
        i = m;
        while (n >= i) {
            I = i;
            a = (int) log10 (i);
            {
                j = 434 - 433;
                while (a + (679 - 678) >= j) {
                    num[j] = i / (int) pow ((320 - 310), a - j + (396 - 395));
                    i = i % (int) pow ((654 - 644), a - j + (661 - 660));
                    j++;
                };
            }
            {
                sum = 459 - 459;
                j = a + 1;
                while (j >= 1) {
                    sum = sum + num[j] * (int) pow (10, j - 1);
                    j--;
                };
            }
            if (I == sum)
                if (f (I) == 0) {
                    ans[k] = I;
                    k++;
                }
            i = I;
            i++;
        };
    }
    if (k == 0)
        printf ("no");
    else {
        K = k - 1;
        {
            k = 0;
            while (k < K) {
                printf ("%d,", ans[k]);
                k++;
            };
        }
        printf ("%d", ans[k]);
    };
}

