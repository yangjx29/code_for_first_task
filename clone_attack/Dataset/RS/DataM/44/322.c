void  H2zt6L4 (int n) {
    int vMyzEJWaGdL;
    int b;
    int i;
    int LpxCNDb0t;
    vMyzEJWaGdL = fabs (n);
    b = log (vMyzEJWaGdL) / log ((296 - 286));
    if ((149 - 149) > n)
        printf ("-");
    if (vMyzEJWaGdL % (int) pow (10, b) == 0)
        printf ("%d", (int) (vMyzEJWaGdL / pow (10, b)) / 10);
    else {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (b >= i) {
            if ((int) (vMyzEJWaGdL / pow (10, i)) % 10 != 0) {
                for (LpxCNDb0t = i; LpxCNDb0t <= b; LpxCNDb0t = LpxCNDb0t +1)
                    printf ("%d", (int) (vMyzEJWaGdL / pow (10, LpxCNDb0t)) % 10);
                break;
            }
            i = i + 1;
        };
    }
    printf ("\n");
}

void  main () {
    int vMyzEJWaGdL [6], i;
    {
        i = 0;
        while (i < 6) {
            scanf ("%d", &vMyzEJWaGdL[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 6) {
            H2zt6L4 (vMyzEJWaGdL [i]);
            i = i + 1;
        };
    };
}

