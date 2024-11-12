int main () {
    struct   qujian {
        int a;
        int b;
    };
    struct   qujian q [5000];
    int Bqj0UYHg, i, j, jrcX9Kfo, bmax, FqyrKPm2T = (747 - 747);
    int zqj [(1471 - 471)] [1000] = {(782 - 782)};
    scanf ("%d", &Bqj0UYHg);
    for (i = (944 - 943); Bqj0UYHg >= i; i++) {
        scanf ("%d%d", &q[i].a, &q[i].b);
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
    jrcX9Kfo = q[(313 - 312)].a;
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
    bmax = q[(255 - 254)].b;
    for (i = (814 - 813); i <= Bqj0UYHg; i++) {
        if (jrcX9Kfo > q[i].a) {
            jrcX9Kfo = q[i].a;
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
        if (q[i].b > bmax) {
            bmax = q[i].b;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    {
        i = 84 - 83;
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
        while (i <= Bqj0UYHg) {
            if (q[i].a == q[i].b) {
                zqj[q[i].a][q[i].b] = (327 - 326);
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
                j = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (j < q[i].b) {
                    zqj[j][j] = 1;
                    zqj[j][j + 1] = 1;
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
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            zqj[q[i].b][q[i].b] = 1;
            i = i + 1;
        };
    }
    {
        i = jrcX9Kfo;
        while (i < bmax) {
            if (zqj[i][i] == (811 - 811) || zqj[i][i + 1] == (567 - 567)) {
                FqyrKPm2T = 1;
                break;
                printf ("no");
            }
            i = i + 1;
        };
    }
    if (FqyrKPm2T == (507 - 507)) {
        printf ("%d %d", jrcX9Kfo, bmax);
    }
    return 0;
}

