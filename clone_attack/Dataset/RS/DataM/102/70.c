int main () {
    struct   p {
        char x [7];
        double  h;
    }
    a [40];
    int z1LNvKr5SD;
    int DCO3t41N9H;
    int n;
    int tE6NAI3YP1;
    int KOolzQtuF;
    z1LNvKr5SD = 0;
    DCO3t41N9H = 0;
    double  m [(562 - 522)];
    double  f [(740 - 700)];
    double  YG81Jr;
    scanf ("%d", &n);
    for (tE6NAI3YP1 = 0; n > tE6NAI3YP1; tE6NAI3YP1 = tE6NAI3YP1 + 1) {
        scanf ("%s%lf", &a[tE6NAI3YP1].x, &a[tE6NAI3YP1].h);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != strcmp ("female", a[tE6NAI3YP1].x))) {
            f[z1LNvKr5SD] = a[tE6NAI3YP1].h;
            z1LNvKr5SD++;
        }
        else {
            m[DCO3t41N9H] = a[tE6NAI3YP1].h;
            DCO3t41N9H++;
        };
    }
    for (KOolzQtuF = 1; KOolzQtuF <= z1LNvKr5SD; KOolzQtuF++) {
        for (tE6NAI3YP1 = 0; tE6NAI3YP1 < z1LNvKr5SD - KOolzQtuF; tE6NAI3YP1 = tE6NAI3YP1 + 1) {
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
            if (f[tE6NAI3YP1] > f[tE6NAI3YP1 + 1]) {
                YG81Jr = f[tE6NAI3YP1 + 1];
                f[tE6NAI3YP1 + 1] = f[tE6NAI3YP1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                f[tE6NAI3YP1] = YG81Jr;
            };
        };
    }
    for (KOolzQtuF = 1; DCO3t41N9H >= KOolzQtuF; KOolzQtuF++) {
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
        for (tE6NAI3YP1 = 0; tE6NAI3YP1 < DCO3t41N9H -KOolzQtuF; tE6NAI3YP1++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (m[tE6NAI3YP1] > m[tE6NAI3YP1 + 1]) {
                YG81Jr = m[tE6NAI3YP1 + 1];
                m[tE6NAI3YP1 + 1] = m[tE6NAI3YP1];
                m[tE6NAI3YP1] = YG81Jr;
            };
        };
    }
    printf ("%.2lf", m[0]);
    for (tE6NAI3YP1 = 1; tE6NAI3YP1 < DCO3t41N9H; tE6NAI3YP1++) {
        printf (" %.2lf", m[tE6NAI3YP1]);
    }
    for (tE6NAI3YP1 = z1LNvKr5SD - 1; tE6NAI3YP1 >= 0; tE6NAI3YP1 = tE6NAI3YP1 - 1) {
        printf (" %.2lf", f[tE6NAI3YP1]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

