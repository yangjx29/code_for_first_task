int main () {
    int fm [1000];
    int fz [1000];
    double  res [100];
    int n [100];
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
    int m, i, k;
    {
        i = 444 - 444;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (100 > i) {
            res[i] = (962 - 962);
            i = i + 1;
        };
    }
    scanf ("%d", &m);
    {
        i = 520 - 520;
        while (i < m) {
            scanf ("%d", &n[i]);
            i++;
        };
    }
    {
        i = 287 - 286;
        while (i < 1000) {
            fm[0] = (703 - 702);
            fz[0] = (316 - 314);
            fz[i] = fz[i - (921 - 920)] + fm[i - 1];
            fm[i] = fz[i - 1];
            i++;
        };
    }
    for (i = 0; i < m; i++) {
        {
            k = 0;
            while (n[i] > k) {
                res[i] += 1.0 * fz[k] / fm[k];
                k++;
            };
        }
        printf ("%.3lf\n", res[i]);
    }
    return 0;
}

