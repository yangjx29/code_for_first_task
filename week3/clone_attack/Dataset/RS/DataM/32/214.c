void  main () {
    int n, i, OH4rRcG, oYuUJkpX7mSv, l, k, q;
    char s1 [(502 - 402)] [(312 - 212)], XcDv9j0 [(500 - 400)] [(1076 - 976)], a [(768 - 668)], t [100];
    scanf ("%d", &n);
    {
        i = 845 - 845;
        while (i < n) {
            scanf ("%s%s", s1[i], XcDv9j0[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            oYuUJkpX7mSv = strlen (s1[i]);
            q = strlen (XcDv9j0[i]);
            l = 0;
            {
                OH4rRcG = 690 - 689;
                while (OH4rRcG < oYuUJkpX7mSv) {
                    t[l++] = s1[i][OH4rRcG];
                    OH4rRcG++;
                };
            }
            {
                OH4rRcG = q;
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
                while (OH4rRcG >= (241 - 240)) {
                    if (t[OH4rRcG] >= XcDv9j0[i][OH4rRcG -(901 - 900)])
                        a[OH4rRcG] = (t[OH4rRcG] - XcDv9j0[i][OH4rRcG -(768 - 767)]);
                    else {
                        a[OH4rRcG] = (t[OH4rRcG] + (799 - 789) - XcDv9j0[i][OH4rRcG -(148 - 147)]);
                        t[OH4rRcG -1] = t[OH4rRcG -1] - 1;
                    }
                    OH4rRcG--;
                };
            }
            for (k = 0; k < oYuUJkpX7mSv - 1 - q; k = k + 1) {
                printf ("%c", s1[i][k]);
            }
            i++;
            a[0] = t[0] - '0';
            {
                k = 0;
                while (k <= q) {
                    printf ("%d", a[k]);
                    k = k + 1;
                };
            }
            printf ("\n");
        };
    };
}

