int main () {
    int k, kkq5LCTwE [200], NHPgIGC [200], i, t, j, a [200] [200], AhpWEYAH;
    scanf ("%d", &k);
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
    for (i = (133 - 132); i <= k; i = i + 1) {
        scanf ("%d%d", &kkq5LCTwE[i], &NHPgIGC[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (t = 1; t <= kkq5LCTwE[i]; t = t + 1) {
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
            for (j = 1; j <= NHPgIGC[i]; j = j + 1) {
                scanf ("%d", &a[t][j]);
            };
        }
        if (kkq5LCTwE[i] == 1 && NHPgIGC[i] == 1)
            printf ("%d", a[1][1]);
        else {
            AhpWEYAH = 0;
            for (t = 1; t <= NHPgIGC[i]; t = t + 1) {
                AhpWEYAH = AhpWEYAH +a[1][t];
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
            }
            for (j = 1; j <= NHPgIGC[i]; j = j + 1) {
                AhpWEYAH = AhpWEYAH +a[kkq5LCTwE[i]][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            for (t = 1; t <= kkq5LCTwE[i]; t = t + 1) {
                AhpWEYAH = AhpWEYAH +a[t][1];
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
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = 1; j <= kkq5LCTwE[i]; j++) {
                AhpWEYAH = AhpWEYAH +a[j][NHPgIGC[i]];
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
            AhpWEYAH = AhpWEYAH -a[1][1] - a[1][NHPgIGC[i]] - a[kkq5LCTwE[i]][NHPgIGC[i]] - a[kkq5LCTwE[i]][1];
            printf ("%d\n", AhpWEYAH);
        };
    }
    return 0;
}

