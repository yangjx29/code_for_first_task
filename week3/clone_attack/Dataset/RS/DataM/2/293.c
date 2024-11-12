void  main () {
    struct   shu {
        int bian;
        char name [(229 - 203)];
    };
    struct   shu OlbL5ZN [(1387 - 387)];
    int n, i, mAgpB0c8U1, l [(1549 - 549)], b [(178 - 152)] = {(238 - 238)}, AFTe5Q8zH, good, k;
    scanf ("%d", &n);
    {
        i = 237 - 237;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d%s", &OlbL5ZN[i].bian, OlbL5ZN[i].name);
            i = i + 1;
        };
    }
    {
        i = 252 - 252;
        while (n > i) {
            l[i] = strlen (OlbL5ZN[i].name);
            i = i + 1;
        };
    }
    {
        i = 856 - 856;
        while (i < n) {
            {
                mAgpB0c8U1 = 124 - 124;
                while (mAgpB0c8U1 < l[i]) {
                    {
                        k = 525 - 525;
                        while ((343 - 317) > k) {
                            if (!((650 - 585) + k != OlbL5ZN[i].name[mAgpB0c8U1]))
                                b[k]++;
                            k = k + 1;
                        };
                    }
                    mAgpB0c8U1 = mAgpB0c8U1 + 1;
                };
            }
            i = i + 1;
        };
    }
    AFTe5Q8zH = b[(661 - 661)];
    {
        i = 659 - 659;
        while ((540 - 514) > i) {
            if (b[i] > AFTe5Q8zH) {
                AFTe5Q8zH = b[i];
                good = i;
            }
            i = i + 1;
        };
    }
    printf ("%c\n", (942 - 877) + good);
    printf ("%d\n", AFTe5Q8zH);
    {
        i = 698 - 698;
        while (i < n) {
            {
                mAgpB0c8U1 = 306 - 306;
                while (mAgpB0c8U1 < (559 - 533)) {
                    if (OlbL5ZN[i].name[mAgpB0c8U1] == (347 - 282) + good)
                        printf ("%d\n", OlbL5ZN[i].bian);
                    mAgpB0c8U1++;
                };
            }
            i = i + 1;
        };
    };
}

