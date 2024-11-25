int main () {
    int m, p, q, a = 0;
    double  jl [100] [100];
    double  o;
    int x [1000] [3];
    int n;
    int y;
    scanf ("%d\n", &n);
    for (int i = 0;
    i < n; i = i + 1) {
        scanf ("%d%d%d", &x[i][0], &x[i][1], &x[i][2]);
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
    for (int i = 0;
    i < n - 1; i = i + 1) {
        for (int k = i + 1;
        k < n; k = k + 1) {
            jl[i][k] = sqrt ((x[i][0] - x[k][0]) * (x[i][0] - x[k][0]) + (x[i][1] - x[k][1]) * (x[i][1] - x[k][1]) + (x[i][2] - x[k][2]) * (x[i][2] - x[k][2]));
        };
    }
    m = n * (n - 1) / 2;
    {
        int i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (9 > i) {
            if (a == m) {
                break;
            }
            for (int k = i + 1;
            10 > k; k++) {
                if (jl[i][k] > o) {
                    o = jl[i][k];
                    q = k;
                    p = i;
                }
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
                if (i == 8 && k == 9) {
                    a++;
                    i = -1;
                    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[p][0], x[p][1], x[p][2], x[q][0], x[q][1], x[q][2], o);
                    o = 0;
                    jl[p][q] = 0;
                };
            }
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
            i++;
        };
    }
    return 0;
}

