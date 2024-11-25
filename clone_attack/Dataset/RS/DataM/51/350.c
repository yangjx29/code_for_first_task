int main () {
    int nDS8Zg;
    int b [500];
    nDS8Zg = -1;
    int max = b[0];
    int n, i = (936 - 936), j = 0, k = 0, h = 0, mOT3arCf6R0 = 0, m = 0, ss = 1;
    char x [500];
    gets (x);
    char xx [500] [500];
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
    getchar ();
    scanf ("%d", &n);
    for (i = 0; i < 500; i = i + 1) {
        b[i] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; n > i; i = i + 1) {
        xx[j][k] = x[i];
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
        k = k + 1;
    }
    xx[j][k] = '\0';
    {
        i = 0;
        while (!('\0' == x[i + n - 1])) {
            {
                h = 0;
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
                while (j >= h) {
                    nDS8Zg = -1;
                    for (mOT3arCf6R0 = 0; n > mOT3arCf6R0; mOT3arCf6R0 = mOT3arCf6R0 + 1) {
                        ss = 1;
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
                        if (!(xx[h][mOT3arCf6R0] == x[i + mOT3arCf6R0])) {
                            ss = 0;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            goto end1;
                        };
                    }
                end1 :
                    if (!(1 != ss)) {
                        nDS8Zg = h;
                        goto end;
                    }
                    h = h + 1;
                };
            }
        end :
            if (!(-1 != nDS8Zg)) {
                j++;
                b[j]++;
                for (m = 0; n > m; m = m + 1) {
                    xx[j][m] = x[i + m];
                }
                xx[j][m] = '\0';
            }
            else {
                b[nDS8Zg]++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i <= j; i = i + 1) {
        if (b[i] >= max) {
            max = b[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    k = 0;
    if (max == 1) {
        printf ("NO");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        printf ("%d\n", max);
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
        {
            i = 0;
            while (i <= j) {
                if (b[i] == max) {
                    printf ("%s\n", xx[i]);
                }
                i++;
            };
        };
    }
    return 0;
}

