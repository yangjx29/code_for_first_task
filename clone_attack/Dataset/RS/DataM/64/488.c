int main () {
    int a [(947 - 902)], b [45];
    int sz [30];
    int n, ybVs50dC7 = 0, aTydqu93, q, Gixt6MNvI;
    double  burS4G9Q;
    double  e;
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
    double  jl [45];
    scanf ("%d", &n);
    {
        int fbAae40 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (3 * n > fbAae40) {
            scanf ("%d", &sz[fbAae40]);
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
            fbAae40 = fbAae40 + 1;
        };
    }
    for (int fbAae40 = 0;
    n - 1 > fbAae40; fbAae40++) {
        int iphx82YP = fbAae40 + 1;
        while (n > iphx82YP) {
            burS4G9Q = pow (1.0 * (sz[3 * iphx82YP] - sz[3 * fbAae40]), 2.0) + pow (1.0 * (sz[3 * iphx82YP + 1] - sz[3 * fbAae40 + 1]), 2.0) + pow (1.0 * (sz[3 * iphx82YP + 2] - sz[3 * fbAae40 + 2]), 2.0);
            jl[ybVs50dC7] = sqrt (burS4G9Q);
            a[ybVs50dC7] = fbAae40;
            b[ybVs50dC7] = iphx82YP;
            iphx82YP++;
            ybVs50dC7 = ybVs50dC7 + 1;
        };
    }
    for (aTydqu93 = 1; n * (n - 1) / 2 > aTydqu93; aTydqu93 = aTydqu93 + 1) {
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
        for (q = 0; q < n * (n - 1) / 2 - aTydqu93; q = q + 1) {
            if (jl[q + 1] > jl[q]) {
                e = jl[q];
                jl[q] = jl[q + 1];
                jl[q + 1] = e;
                Gixt6MNvI = a[q];
                a[q] = a[q + 1];
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
                a[q + 1] = Gixt6MNvI;
                Gixt6MNvI = b[q];
                b[q] = b[q + 1];
                b[q + 1] = Gixt6MNvI;
            };
        };
    }
    for (aTydqu93 = 0; n * (n - 1) / 2 > aTydqu93; aTydqu93++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sz[3 * a[aTydqu93]], sz[3 * a[aTydqu93] + 1], sz[3 * a[aTydqu93] + 2], sz[3 * b[aTydqu93]], sz[3 * b[aTydqu93] + 1], sz[3 * b[aTydqu93] + 2], jl[aTydqu93]);
    }
    return 0;
}

