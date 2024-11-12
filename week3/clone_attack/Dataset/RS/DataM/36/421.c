main () {
    char t;
    int xTLIkB7XHv;
    int j;
    int x, MFftNoiYS;
    char a [200];
    char b [200];
    scanf ("%s %s", a, b);
    x = strlen (a);
    MFftNoiYS = strlen (b);
    if (!(MFftNoiYS == x))
        ;
    else {
        for (xTLIkB7XHv = 0; xTLIkB7XHv < x; xTLIkB7XHv++) {
            j = xTLIkB7XHv + 1;
            while (x > j) {
                if (a[xTLIkB7XHv] < a[j]) {
                    t = a[xTLIkB7XHv];
                    a[xTLIkB7XHv] = a[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    a[j] = t;
                }
                j = j + 1;
            };
        }
        for (xTLIkB7XHv = 0; xTLIkB7XHv < MFftNoiYS; xTLIkB7XHv++)
            for (j = xTLIkB7XHv + 1; MFftNoiYS > j; j = j + 1) {
                if (b[xTLIkB7XHv] < b[j]) {
                    t = b[xTLIkB7XHv];
                    b[xTLIkB7XHv] = b[j];
                    b[j] = t;
                };
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (a, b) == 0)
            ;
        else
            ;
    }
    return 0;
}

