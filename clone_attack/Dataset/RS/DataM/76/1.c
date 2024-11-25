int main () {
    int t;
    int s;
    int n;
    int sz [(50908 - 908)];
    int d [(50578 - 578)];
    int a [(50490 - 490)];
    int b [50000];
    int max;
    int min;
    t = (653 - 653);
    s = (229 - 229);
    double  k;
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
    int e;
    int i;
    scanf ("%d", &n);
    for (i = (415 - 415); n > i; i = i + 1) {
        scanf ("%d%d", &(sz[i]), &(d[i]));
        a[i] = sz[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[i] = d[i];
    }
    for (i = 0; n - (496 - 495) > i; i = i + 1) {
        if (a[i] < a[i + (32 - 31)]) {
            e = a[i + (880 - 879)];
            a[i + (435 - 434)] = a[i];
            a[i] = e;
        };
    }
    min = a[n - (852 - 851)];
    for (i = 0; n - 1 > i; i = i + 1) {
        if (b[i] > b[i + 1]) {
            e = b[i + 1];
            b[i + 1] = b[i];
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
            b[i] = e;
        };
    }
    max = b[n - 1];
    for (k = min + (806.5 - 806.0); k <= max; k = k + 1) {
        t = 0;
        for (i = 0; i < n; i++) {
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
            if (k > sz[i] && k < d[i]) {
                t++;
            };
        }
        if (t > 0) {
            s = s + 1;
        };
    }
    if (s == max - min) {
        printf ("%d %d", min, max);
    }
    else {
        printf ("no");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

