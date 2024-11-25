int main () {
    double  r [(705 - 655)];
    double  eJuPpj6qN [50];
    double  b [50];
    double  eQeTIiHt5Lx;
    int m;
    int t;
    int rBH9yrxk6;
    int u;
    m = (131 - 131);
    int j;
    int k;
    int n;
    int i;
    j = (50 - 50);
    k = (665 - 665);
    char e [(303 - 253)];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s", e);
        scanf ("%lf", &r[i]);
        if (!('m' != e[0])) {
            eJuPpj6qN[j] = r[i];
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
            j++;
        }
        else {
            b[k] = r[i];
            k++;
        };
    }
    {
        t = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (t < j) {
            rBH9yrxk6 = t;
            {
                u = 521 - 520;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (u < j) {
                    if (eJuPpj6qN[u] < eJuPpj6qN[rBH9yrxk6]) {
                        rBH9yrxk6 = u;
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
                    u = u + 1;
                };
            }
            if (rBH9yrxk6 != t) {
                eQeTIiHt5Lx = eJuPpj6qN[rBH9yrxk6];
                eJuPpj6qN[rBH9yrxk6] = eJuPpj6qN[t];
                eJuPpj6qN[t] = eQeTIiHt5Lx;
            }
            t++;
        };
    }
    for (i = 0; j > i; i = i + 1) {
        printf ("%.2lf ", eJuPpj6qN[i]);
    }
    eQeTIiHt5Lx = 0;
    u = 0;
    rBH9yrxk6 = 0;
    t = 0;
    {
        t = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (t < k) {
            rBH9yrxk6 = t;
            for (u = t + 1; u < k; u = u + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (b[u] > b[rBH9yrxk6]) {
                    rBH9yrxk6 = u;
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
            if (rBH9yrxk6 != t) {
                eQeTIiHt5Lx = b[rBH9yrxk6];
                b[rBH9yrxk6] = b[t];
                b[t] = eQeTIiHt5Lx;
            }
            t++;
        };
    }
    {
        i = 0;
        while (i < k - 1) {
            printf ("%.2lf ", b[i]);
            i = i + 1;
        };
    }
    printf ("%.2lf", b[k - 1]);
    return 0;
}

