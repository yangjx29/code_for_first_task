int main () {
    int ToQflDyS;
    int a [50000] [2];
    int n, Oj98UgQB2Df;
    int PHhm2id3WeO = 0;
    int max = a[0][1];
    scanf ("%d\n", &n);
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
    {
        Oj98UgQB2Df = 765 - 765;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Oj98UgQB2Df) {
            scanf ("%d%d", &a[Oj98UgQB2Df][(292 - 292)], &a[Oj98UgQB2Df][(222 - 221)]);
            Oj98UgQB2Df = Oj98UgQB2Df +1;
        };
    }
    {
        int p87E0U = (945 - 944);
        while (p87E0U <= n) {
            {
                int x = (525 - 525);
                while (x < n - p87E0U) {
                    if (a[x + (438 - 437)][0] < a[x][0]) {
                        ToQflDyS = a[x][0];
                        a[x][0] = a[x + (821 - 820)][0];
                        a[x + 1][0] = ToQflDyS;
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
                        ToQflDyS = a[x][1];
                        a[x][1] = a[x + 1][1];
                        a[x + 1][1] = ToQflDyS;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    x++;
                };
            }
            p87E0U++;
        };
    }
    {
        Oj98UgQB2Df = 1;
        while (Oj98UgQB2Df < n) {
            if (a[Oj98UgQB2Df][0] > max) {
                PHhm2id3WeO = 1;
                break;
                printf ("no");
            }
            else if (a[Oj98UgQB2Df][1] > max)
                max = a[Oj98UgQB2Df][1];
            else
                ;
            Oj98UgQB2Df++;
        };
    }
    if (PHhm2id3WeO == 0)
        printf ("%d %d", a[0][0], max);
    return 0;
}

