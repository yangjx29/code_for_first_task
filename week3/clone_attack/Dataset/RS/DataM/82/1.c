int main () {
    int c [100];
    int b [100];
    int SRDclMoCIZ;
    int n;
    int fQKY2yGtab0;
    int ddCLX4Q83xj;
    int eLBaQRMbsl;
    int e;
    int f;
    int uElkPhb [(904 - 804)];
    eLBaQRMbsl = 0;
    {
        ddCLX4Q83xj = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (99 >= ddCLX4Q83xj) {
            uElkPhb[ddCLX4Q83xj] = 0, b[ddCLX4Q83xj] = 0, c[ddCLX4Q83xj] = 0;
            ddCLX4Q83xj = ddCLX4Q83xj + 1;
        };
    }
    scanf ("%d", &n);
    fQKY2yGtab0 = (586 - 586);
    {
        SRDclMoCIZ = 0;
        while (n > SRDclMoCIZ) {
            scanf ("%d%d", &(uElkPhb[SRDclMoCIZ]), &(b[SRDclMoCIZ]));
            if (90 <= uElkPhb[SRDclMoCIZ] && 140 >= uElkPhb[SRDclMoCIZ] && b[SRDclMoCIZ] >= 60 && b[SRDclMoCIZ] <= 90) {
                fQKY2yGtab0 = fQKY2yGtab0 + 1;
            }
            else {
                c[SRDclMoCIZ] = fQKY2yGtab0;
                fQKY2yGtab0 = 0;
            }
            SRDclMoCIZ = SRDclMoCIZ +1;
            c[n] = fQKY2yGtab0;
        };
    }
    for (SRDclMoCIZ = 0; SRDclMoCIZ <= n; SRDclMoCIZ = SRDclMoCIZ +1) {
        if (c[SRDclMoCIZ] > eLBaQRMbsl) {
            eLBaQRMbsl = c[SRDclMoCIZ];
        };
    }
    printf ("%d", eLBaQRMbsl);
    return 0;
}

