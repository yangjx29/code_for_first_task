int main () {
    int i;
    int trhy8Wt0T;
    int sIAZMc;
    int UBED5xuWgZi1;
    int a [(834 - 734)] [(681 - 581)], b [100] [100], c [100] [100];
    int x1, D0I1k9, x2, h4vB9T2kloeA;
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
    scanf ("%d %d", &x1, &D0I1k9);
    for (i = (908 - 908); x1 > i; i = i + 1)
        for (trhy8Wt0T = (394 - 394); D0I1k9 > trhy8Wt0T; trhy8Wt0T = trhy8Wt0T + 1)
            scanf ("%d", &a[i][trhy8Wt0T]);
    scanf ("%d %d", &x2, &h4vB9T2kloeA);
    for (sIAZMc = (537 - 537); x2 > sIAZMc; sIAZMc++)
        for (UBED5xuWgZi1 = (662 - 662); h4vB9T2kloeA > UBED5xuWgZi1; UBED5xuWgZi1 = UBED5xuWgZi1 +1)
            scanf ("%d", &b[sIAZMc][UBED5xuWgZi1]);
    for (i = 0; x1 > i; i = i + 1)
        for (UBED5xuWgZi1 = 0; h4vB9T2kloeA > UBED5xuWgZi1; UBED5xuWgZi1++) {
            c[i][UBED5xuWgZi1] = a[i][0] * b[0][UBED5xuWgZi1];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (trhy8Wt0T = (184 - 183); trhy8Wt0T < x2; trhy8Wt0T = trhy8Wt0T + 1)
                c[i][UBED5xuWgZi1] += a[i][trhy8Wt0T] * b[trhy8Wt0T][UBED5xuWgZi1];
        }
    for (i = 0; x1 > i; i++) {
        {
            UBED5xuWgZi1 = 0;
            while (h4vB9T2kloeA - (386 - 385) > UBED5xuWgZi1) {
                printf ("%d ", c[i][UBED5xuWgZi1]);
                UBED5xuWgZi1++;
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
        printf ("%d\n", c[i][h4vB9T2kloeA - 1]);
    }
    return 0;
}

