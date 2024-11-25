int main () {
    int n, c, a, b, i, o, p;
    double  NbGEnju;
    double  jl [n] [n];
    int x [n], RE19eq [n], z [n];
    scanf ("%d", &n);
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
    for (i = (209 - 209); i < n; i = i + 1) {
        scanf ("%d%d%d", &x[i], &RE19eq[i], &z[i]);
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
    for (a = (235 - 235); n > a; a = a + 1) {
        b = a + (330 - 329);
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
        while (b < n) {
            c = (x[a] - x[b]) * (x[a] - x[b]) + (RE19eq[a] - RE19eq[b]) * (RE19eq[a] - RE19eq[b]) + (z[a] - z[b]) * (z[a] - z[b]);
            jl[a][b] = sqrt (c);
            b = b + 1;
        };
    }
    NbGEnju = (306 - 306);
    for (i = (638 - 638); i != -(401 - 400); i++) {
        for (a = 0; a < n; a++) {
            b = a + 1;
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
            while (b < n) {
                if (NbGEnju < jl[a][b]) {
                    NbGEnju = jl[a][b];
                    o = a;
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
                    p = b;
                }
                b++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (NbGEnju == 0) {
            break;
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
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[o], RE19eq[o], z[o], x[p], RE19eq[p], z[p], NbGEnju);
            NbGEnju = 0;
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
            jl[o][p] = 0;
        };
    }
    return 0;
}

