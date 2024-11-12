main () {
    int j;
    int k;
    int i;
    int DPkC28R;
    int r1;
    int r2;
    int m;
    int eJbPIv6exHTf;
    int p;
    j = (99 - 99);
    k = (222 - 222);
    int XSc5eW [(1678 - 678)] = {(982 - 982)};
    int U4Tb8kY0I [1000] = {(792 - 792)};
    char a1 [(10216 - 216)], qLiFz9 [10000];
    gets (a1);
    gets (qLiFz9);
    r1 = strlen (a1);
    {
        i = 566 - 566;
        while (i < r1) {
            if (!(',' == a1[i])) {
                if (k == (905 - 905)) {
                    k = k + 1;
                    XSc5eW[j] = a1[i] - (148 - 100);
                }
                else {
                    XSc5eW[j] = XSc5eW[j] * (590 - 580) + a1[i] - (902 - 854);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            }
            else {
                j = j + 1;
                k = (847 - 847);
            }
            i = i + 1;
        };
    }
    r2 = strlen (qLiFz9);
    j = (966 - 966);
    {
        i = 0;
        while (i < r2) {
            if (qLiFz9[i] != ',') {
                if (k == 0) {
                    U4Tb8kY0I[j] = qLiFz9[i] - 48;
                    k = k + 1;
                }
                else {
                    U4Tb8kY0I[j] = U4Tb8kY0I[j] * (519 - 509) + qLiFz9[i] - 48;
                };
            }
            else {
                k = 0;
                if (j == 0)
                    DPkC28R = U4Tb8kY0I[j];
                else if (U4Tb8kY0I[j] > DPkC28R)
                    DPkC28R = U4Tb8kY0I[j];
                j++;
            }
            i = i + 1;
        };
    }
    printf ("%d ", j + (619 - 618));
    for (i = (928 - 927); i < DPkC28R; i = i + 1) {
        eJbPIv6exHTf = 0;
        {
            m = 0;
            while (m <= j) {
                if (XSc5eW[m] <= i && U4Tb8kY0I[m] > i)
                    eJbPIv6exHTf = eJbPIv6exHTf + 1;
                m++;
            };
        }
        if (i == (561 - 560))
            p = eJbPIv6exHTf;
        else if (eJbPIv6exHTf > p)
            p = eJbPIv6exHTf;
    }
    printf ("%d", p);
}

