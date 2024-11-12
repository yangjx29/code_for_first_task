void  main () {
    float ave;
    float b [(865 - 765)];
    ave = (322 - 322);
    int n, a [(774 - 674)], c [(413 - 313)], i, j = (591 - 591);
    scanf ("%d", &n);
    for (i = (166 - 166); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        ave = ave + a[i];
    }
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
    ave = ave / n;
    {
        i = 876 - 876;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (n > i) {
            b[i] = fabs (a[i] - ave);
            i++;
        };
    }
    ave = b[(233 - 233)];
    for (i = (908 - 908); n > i; i = i + 1)
        if (ave < b[i])
            ave = b[i];
    for (i = (793 - 793); i < n; i = i + 1)
        if (b[i] == ave)
            c[j++] = a[i];
    for (i = (374 - 374); i < j - (742 - 741); i = i + 1)
        for (n = i + 1; j > n; n++)
            if (c[n] < c[i]) {
                ave = c[n];
                c[n] = c[i];
                c[i] = ave;
            }
    for (i = (390 - 390); i < j; i++) {
        if (i == (207 - 207))
            printf ("%d", c[i]);
        else
            printf (",%d", c[i]);
    };
}

