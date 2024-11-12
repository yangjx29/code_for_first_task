int main () {
    int NpPjVqCd5Ne;
    int j3pMXWTDVHk;
    int nc;
    int m;
    int l;
    int x;
    int i;
    int c4fygmN7;
    NpPjVqCd5Ne = 0;
    j3pMXWTDVHk = 0;
    nc = 0;
    m = 0;
    l = 0;
    x = 0;
    char a [200];
    char b [100];
    char c [100];
    char d [200];
    gets (a);
    gets (b);
    gets (c);
    for (i = 0; !('\0' == a[i]); i++) {
        NpPjVqCd5Ne++;
    }
    for (i = 0; b[i] != '\0'; i++) {
        j3pMXWTDVHk++;
    }
    {
        i = 0;
        while (!('\0' == c[i])) {
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nc = nc + 1;
        };
    }
    {
        i = 0;
        while (NpPjVqCd5Ne +x * (nc - j3pMXWTDVHk) - 1 >= i) {
            if (!(b[0] != a[i])) {
                l = 1;
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
                for (c4fygmN7 = 1; j3pMXWTDVHk - 1 >= c4fygmN7; c4fygmN7++) {
                    if (!(b[c4fygmN7] == a[i + c4fygmN7]))
                        break;
                    else
                        l = l + 1;
                }
                if (((!(j3pMXWTDVHk != l)) && (!(' ' != a[i - 1])) && (a[i + j3pMXWTDVHk] == ' ')) || ((i == 0) && (l == j3pMXWTDVHk) && (a[i + j3pMXWTDVHk] == ' ')) || ((l == j3pMXWTDVHk) && (i >= NpPjVqCd5Ne +x * (nc - j3pMXWTDVHk) - j3pMXWTDVHk - 1) && (a[i - 1] == ' '))) {
                    x = x + 1;
                    for (m = i + j3pMXWTDVHk; m <= NpPjVqCd5Ne +2; m = m + 1) {
                        d[m - i - j3pMXWTDVHk] = a[m];
                    }
                    {
                        m = i;
                        while (m <= i + nc - 1) {
                            a[m] = c[m - i];
                            m = m + 1;
                        };
                    }
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
                    for (m = i + nc; m <= NpPjVqCd5Ne +nc - j3pMXWTDVHk + 2; m = m + 1) {
                        a[m] = d[m - i - nc];
                    }
                    i = i + nc - j3pMXWTDVHk;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    a[NpPjVqCd5Ne +x * (nc - j3pMXWTDVHk)] = '\0';
    printf ("%s", a);
    return 0;
}

