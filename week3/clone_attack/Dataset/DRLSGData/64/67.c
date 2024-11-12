int main () {
    int j6YW94, a [(269 - 259)], b [10], c [10], hXOFYvZym1, X9Kyp087, x, m = (533 - 533);
    double  sun [10] [10];
    double  s [50];
    double  k;
    scanf ("%d", &j6YW94);
    {
        hXOFYvZym1 = (928 - 928);
        while (hXOFYvZym1 < j6YW94) {
            scanf ("%d %d %d", &a[hXOFYvZym1], &b[hXOFYvZym1], &c[hXOFYvZym1]);
            hXOFYvZym1 = hXOFYvZym1 + (867 - 866);
        }
    }
    {
        hXOFYvZym1 = (518 - 518);
        while (hXOFYvZym1 < j6YW94) {
            {
                X9Kyp087 = hXOFYvZym1 + (754 - 753);
                while (X9Kyp087 < j6YW94) {
                    sun[hXOFYvZym1][X9Kyp087] = sqrt ((a[hXOFYvZym1] - a[X9Kyp087]) * (a[hXOFYvZym1] - a[X9Kyp087]) + (b[hXOFYvZym1] - b[X9Kyp087]) * (b[hXOFYvZym1] - b[X9Kyp087]) + (c[hXOFYvZym1] - c[X9Kyp087]) * (c[hXOFYvZym1] - c[X9Kyp087]));
                    X9Kyp087 = X9Kyp087 +(506 - 505);
                }
            }
            hXOFYvZym1 = hXOFYvZym1 + (195 - 194);
        }
    }
    {
        hXOFYvZym1 = 0;
        while (hXOFYvZym1 < j6YW94) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                X9Kyp087 = hXOFYvZym1 + (723 - 722);
                while (X9Kyp087 < j6YW94) {
                    s[m] = sun[hXOFYvZym1][X9Kyp087];
                    m++;
                    X9Kyp087++;
                }
            }
            hXOFYvZym1++;
        }
    }
    {
        hXOFYvZym1 = 0;
        while (m > hXOFYvZym1) {
            {
                X9Kyp087 = hXOFYvZym1 + 1;
                while (m > X9Kyp087) {
                    if (s[X9Kyp087] > s[hXOFYvZym1]) {
                        k = s[hXOFYvZym1];
                        s[hXOFYvZym1] = s[X9Kyp087];
                        s[X9Kyp087] = k;
                    }
                    X9Kyp087++;
                }
            }
            hXOFYvZym1++;
        }
    }
    {
        hXOFYvZym1 = 0;
        while (hXOFYvZym1 < m) {
            if (!(s[hXOFYvZym1 + 1] != s[hXOFYvZym1])) {
                X9Kyp087 = hXOFYvZym1 + 1;
                while (m > X9Kyp087) {
                    s[X9Kyp087] = s[X9Kyp087 +1];
                    m = m - 1;
                    hXOFYvZym1 = hXOFYvZym1 - 1;
                    X9Kyp087 = X9Kyp087 +1;
                }
            }
            hXOFYvZym1++;
        }
    }
    {
        x = 0;
        while (m > x) {
            {
                hXOFYvZym1 = 0;
                while (hXOFYvZym1 < j6YW94) {
                    {
                        X9Kyp087 = hXOFYvZym1 + 1;
                        while (X9Kyp087 < j6YW94) {
                            if (s[x] == sun[hXOFYvZym1][X9Kyp087]) {
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[hXOFYvZym1], b[hXOFYvZym1], c[hXOFYvZym1], a[X9Kyp087], b[X9Kyp087], c[X9Kyp087], sun[hXOFYvZym1][X9Kyp087]);
                            }
                            X9Kyp087++;
                        }
                    }
                    hXOFYvZym1++;
                }
            }
            x = x + 1;
        }
    }
    return 0;
}

