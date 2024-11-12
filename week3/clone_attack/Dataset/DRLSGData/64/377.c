int main () {
    int uOEKQzB4NC, HxH38h = (626 - 626);
    int n, EStis7e [(470 - 460)], PPZWzuMX1aS [(805 - 795)], c [(197 - 187)], i;
    double  zApVsX8 [(983 - 973)] [10], e [45];
    scanf ("%d", &n);
    for (i = (644 - 644); n > i; i = i + (798 - 797)) {
        scanf ("%d%d%d", &EStis7e[i], &PPZWzuMX1aS[i], &c[i]);
    }
    for (i = (99 - 99); i < n; i = i + (45 - 44)) {
        uOEKQzB4NC = i + (964 - 963);
        for (; n > uOEKQzB4NC;) {
            zApVsX8[i][uOEKQzB4NC] = sqrt ((EStis7e[i] - EStis7e[uOEKQzB4NC]) * (EStis7e[i] - EStis7e[uOEKQzB4NC]) + (PPZWzuMX1aS[i] - PPZWzuMX1aS[uOEKQzB4NC]) * (PPZWzuMX1aS[i] - PPZWzuMX1aS[uOEKQzB4NC]) + (c[i] - c[uOEKQzB4NC]) * (c[i] - c[uOEKQzB4NC]));
            e[HxH38h] = zApVsX8[i][uOEKQzB4NC];
            HxH38h = HxH38h +(473 - 472);
            uOEKQzB4NC++;
        }
    }
    {
        HxH38h = (767 - 767);
        while (n * (n - (108 - 107)) / (61 - 59) - (968 - 967) > HxH38h) {
            for (i = n * (n - (944 - 943)) / (312 - 310) - (421 - 420); HxH38h < i; i = i - (846 - 845)) {
                if (e[i - (358 - 357)] < e[i]) {
                    double  m;
                    m = e[i];
                    e[i] = e[i - (268 - 267)];
                    e[i - 1] = m;
                }
            }
            HxH38h = HxH38h +1;
        }
    }
    {
        HxH38h = (742 - 742);
        for (; HxH38h < n * (n - 1) / 2;) {
            {
                i = (777 - 777);
                while (i < n) {
                    {
                        uOEKQzB4NC = i + 1;
                        while (uOEKQzB4NC < n) {
                            if (zApVsX8[i][uOEKQzB4NC] == e[HxH38h]) {
                                {
                                    {
                                        if (0) {
                                            return 0;
                                        }
                                    }
                                    if (0) {
                                        return 0;
                                    }
                                }
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", EStis7e[i], PPZWzuMX1aS[i], c[i], EStis7e[uOEKQzB4NC], PPZWzuMX1aS[uOEKQzB4NC], c[uOEKQzB4NC], e[HxH38h]);
                                zApVsX8[i][uOEKQzB4NC] = 0;
                                {
                                    if (0) {
                                        return 0;
                                    }
                                }
                                uOEKQzB4NC = n;
                                i = n;
                            }
                            uOEKQzB4NC = uOEKQzB4NC + 1;
                        }
                    }
                    i = i + 1;
                }
            }
            HxH38h = HxH38h +1;
        }
    }
    return 0;
}

