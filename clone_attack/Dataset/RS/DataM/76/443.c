int main () {
    int ZPiC2hWMkN;
    int i;
    int max;
    int l08X7R;
    int cU9IvT;
    int cOPCcQRuGJi;
    ZPiC2hWMkN = 0;
    int EyogwIhAdfzJ;
    int a [50000] = {0};
    int i4oaBT [50000] = {0};
    int c [10003] = {0};
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
    int t1;
    int n5nJ2tw;
    t1 = a[0];
    n5nJ2tw = i4oaBT[0];
    scanf ("%d", &EyogwIhAdfzJ);
    scanf ("\n%d%d", &a[0], &i4oaBT[0]);
    for (i = 1; i < EyogwIhAdfzJ; i = i + 1) {
        scanf ("\n%d%d", &a[i], &i4oaBT[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] < t1) {
            t1 = a[i];
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
            };
        }
        if (n5nJ2tw < i4oaBT[i]) {
            n5nJ2tw = i4oaBT[i];
        };
    }
    for (i = 0; i < EyogwIhAdfzJ; i++) {
        for (cU9IvT = a[i] * 2; cU9IvT <= i4oaBT[i] * 2; cU9IvT++) {
            c[cU9IvT] = 1;
        };
    }
    for (cU9IvT = 0; cU9IvT < 10001; cU9IvT++) {
        ZPiC2hWMkN += c[cU9IvT];
    }
    if ((n5nJ2tw - t1 + 1) * 2 - 1 != ZPiC2hWMkN) {
        printf ("no");
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
    else {
        printf ("%d %d", t1, n5nJ2tw);
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
    return 0;
}

