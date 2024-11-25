int main () {
    double  z [100];
    int m, aNCU4g5wSl6, beSpvwz4sC;
    float c;
    int sz [100];
    double  s [100];
    double  rt [100];
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
    c = 0;
    scanf ("%d", &m);
    {
        aNCU4g5wSl6 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > aNCU4g5wSl6) {
            scanf ("%d", &sz[aNCU4g5wSl6]);
            aNCU4g5wSl6++;
        };
    }
    aNCU4g5wSl6 = 0;
    while (aNCU4g5wSl6 < m) {
        for (beSpvwz4sC = 0; beSpvwz4sC < sz[aNCU4g5wSl6]; beSpvwz4sC++) {
            if (beSpvwz4sC == 0) {
                s[beSpvwz4sC] = 1;
                z[beSpvwz4sC] = 2;
                rt[beSpvwz4sC] = z[beSpvwz4sC] / s[beSpvwz4sC];
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (beSpvwz4sC == 1) {
                    s[beSpvwz4sC] = 2;
                    z[beSpvwz4sC] = 3;
                    rt[beSpvwz4sC] = z[beSpvwz4sC] / s[beSpvwz4sC];
                }
                else {
                    z[beSpvwz4sC] = z[beSpvwz4sC - 1] + z[beSpvwz4sC - 2];
                    s[beSpvwz4sC] = s[beSpvwz4sC - 1] + s[beSpvwz4sC - 2];
                    rt[beSpvwz4sC] = z[beSpvwz4sC] / s[beSpvwz4sC];
                };
            }
            c = c + rt[beSpvwz4sC];
        }
        printf ("%.3f\n", c);
        c = 0;
        aNCU4g5wSl6++;
    }
    return 0;
}

