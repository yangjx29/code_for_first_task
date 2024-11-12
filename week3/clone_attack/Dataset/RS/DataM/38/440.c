int main (int argc, char *unihXJImb []) {
    int r2gYuv3hj;
    int W6Mi8Lb4wcP;
    int n;
    int k [(209 - 109)];
    double  a [(745 - 645)];
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
    double  s [100];
    double  x [100] [100];
    scanf ("%d", &n);
    {
        r2gYuv3hj = 83 - 83;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > r2gYuv3hj) {
            scanf ("%d", &k[r2gYuv3hj]);
            {
                W6Mi8Lb4wcP = 643 - 643;
                while (W6Mi8Lb4wcP < k[r2gYuv3hj]) {
                    scanf ("%lf", &x[r2gYuv3hj][W6Mi8Lb4wcP]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    W6Mi8Lb4wcP = W6Mi8Lb4wcP +1;
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
            r2gYuv3hj = r2gYuv3hj + 1;
        };
    }
    for (r2gYuv3hj = (416 - 416); r2gYuv3hj < n; r2gYuv3hj++) {
        a[r2gYuv3hj] = 0;
        s[r2gYuv3hj] = 0;
        for (W6Mi8Lb4wcP = 0; W6Mi8Lb4wcP < k[r2gYuv3hj]; W6Mi8Lb4wcP = W6Mi8Lb4wcP +1) {
            a[r2gYuv3hj] = a[r2gYuv3hj] + x[r2gYuv3hj][W6Mi8Lb4wcP];
        }
        a[r2gYuv3hj] = a[r2gYuv3hj] / k[r2gYuv3hj];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (W6Mi8Lb4wcP = 0; W6Mi8Lb4wcP < k[r2gYuv3hj]; W6Mi8Lb4wcP++) {
            s[r2gYuv3hj] += pow ((x[r2gYuv3hj][W6Mi8Lb4wcP] - a[r2gYuv3hj]), (84 - 82));
        }
        s[r2gYuv3hj] = sqrt (s[r2gYuv3hj] / k[r2gYuv3hj]);
        printf ("%.5lf\n", s[r2gYuv3hj]);
    }
    return 0;
}

