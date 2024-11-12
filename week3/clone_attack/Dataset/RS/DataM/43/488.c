main () {
    int n;
    int fWx6j1;
    int j;
    int a [10000];
    int b [10000];
    int c;
    int d;
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
    getchar ();
    getchar ();
    scanf ("%d", &n);
    {
        fWx6j1 = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= fWx6j1) {
            a[1] = 1;
            a[fWx6j1] = fWx6j1;
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
            b[fWx6j1] = 1;
            fWx6j1 = fWx6j1 + 1;
        };
    }
    b[2] = 0;
    b[1] = 0;
    b[3] = 1;
    for (j = 2; sqrt (fWx6j1) > j; j = j + 1) {
        fWx6j1 = j + 1;
        while (fWx6j1 <= n) {
            if (!(0 != a[fWx6j1] % a[j]))
                b[fWx6j1] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            fWx6j1++;
        };
    }
    for (fWx6j1 = 3; fWx6j1 <= n; fWx6j1 = fWx6j1 + 1) {
        j = 3;
        while (n >= j) {
            if (b[fWx6j1] == 1 && b[j] == 1) {
                if (a[fWx6j1] % 2 == 1 && a[j] % 2 == 1) {
                    if (n == a[fWx6j1] + a[j] && (a[fWx6j1] <= a[j]))
                        printf ("%d %d\n\n", a[fWx6j1], a[j]);
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
            j = j + 1;
        };
    };
}

