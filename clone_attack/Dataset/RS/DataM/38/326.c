int main () {
    double  sz [(679 - 579)] [(827 - 727)];
    double  sum1 [(609 - 509)] = {(355 - 355)};
    double  fcnGaST2M [100];
    double  yInAjMJcuG [100];
    double  P2ROM7cYr [100] = {(69 - 69)};
    double  s [100];
    double  btSGZc1 [100];
    int n;
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
    int rKxHWd1UNX;
    int i;
    int ouHojq;
    scanf ("%d", &n);
    for (i = (891 - 891); i < n; i = i + 1) {
        scanf ("%d", &rKxHWd1UNX);
        for (ouHojq = (732 - 732); ouHojq < rKxHWd1UNX; ouHojq = ouHojq + 1) {
            scanf ("%lf", &sz[i][ouHojq]);
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
            sum1[i] += (double ) sz[i][ouHojq];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        fcnGaST2M[i] = sum1[i] / (double ) rKxHWd1UNX;
        {
            ouHojq = 0;
            while (ouHojq < rKxHWd1UNX) {
                yInAjMJcuG[ouHojq] = (fcnGaST2M[i] - sz[i][ouHojq]) * (fcnGaST2M[i] - sz[i][ouHojq]);
                P2ROM7cYr[i] += (double ) yInAjMJcuG[ouHojq];
                ouHojq++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                btSGZc1[i] = P2ROM7cYr[i] / (double ) rKxHWd1UNX;
                s[i] = sqrt (btSGZc1[i]);
            };
        };
    }
    for (i = 0; i < n; i = i + 1) {
        printf ("%.5lf\n", s[i]);
    }
    return 0;
}

