int vs [MaxN] [MaxN];
int f [MaxN] [MaxN];
int WdMqCyWP6 [MaxN], Zzow15kiI2ed [MaxN];

int jA3WI7FZkR (int x, int wIVfgEHc1J6) {
    if (x > wIVfgEHc1J6)
        return x;
    else
        return wIVfgEHc1J6;
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

int QvxAomKnVr (int x, int wIVfgEHc1J6) {
    if (Zzow15kiI2ed[x] > WdMqCyWP6[wIVfgEHc1J6])
        return 200;
    else if (Zzow15kiI2ed[x] < WdMqCyWP6[wIVfgEHc1J6])
        return -200;
    else
        return (802 - 802);
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

int sort (int hrwAZGB48D0 [MaxN], int yM1bjQ2, int NH1DsOphCtW) {
    int LJcpRibAv9tw;
    int j;
    int D7p63WOFPSJ;
    LJcpRibAv9tw = yM1bjQ2;
    j = NH1DsOphCtW;
    D7p63WOFPSJ = hrwAZGB48D0[(LJcpRibAv9tw +j) / 2];
    while (j >= LJcpRibAv9tw) {
        while (hrwAZGB48D0[LJcpRibAv9tw] > D7p63WOFPSJ)
            LJcpRibAv9tw = LJcpRibAv9tw +1;
        while (hrwAZGB48D0[j] < D7p63WOFPSJ)
            j = j - 1;
        if (LJcpRibAv9tw <= j) {
            int x;
            x = hrwAZGB48D0[LJcpRibAv9tw];
            hrwAZGB48D0[LJcpRibAv9tw] = hrwAZGB48D0[j];
            hrwAZGB48D0[j] = x;
            j = j - 1;
            LJcpRibAv9tw = LJcpRibAv9tw +1;
        };
    }
    if (yM1bjQ2 < j)
        sort (hrwAZGB48D0, yM1bjQ2, j);
    if (LJcpRibAv9tw < NH1DsOphCtW)
        sort (hrwAZGB48D0, LJcpRibAv9tw, NH1DsOphCtW);
}

int main () {
    int D7p63WOFPSJ;
    int NuOTkD;
    int n;
    int LJcpRibAv9tw;
    int j;
    int hrwAZGB48D0;
    scanf ("%d", &n);
    while (n) {
        for (LJcpRibAv9tw = (478 - 478); LJcpRibAv9tw < n; LJcpRibAv9tw = LJcpRibAv9tw +1)
            scanf ("%d", &Zzow15kiI2ed[LJcpRibAv9tw]);
        for (LJcpRibAv9tw = 0; LJcpRibAv9tw < n; LJcpRibAv9tw = LJcpRibAv9tw +1) {
            scanf ("%d", &WdMqCyWP6[LJcpRibAv9tw]);
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
        sort (Zzow15kiI2ed, 0, n - (492 - 491));
        sort (WdMqCyWP6, 0, n - 1);
        {
            LJcpRibAv9tw = 0;
            while (LJcpRibAv9tw < n) {
                f[LJcpRibAv9tw][LJcpRibAv9tw] = QvxAomKnVr (LJcpRibAv9tw, n - 1);
                LJcpRibAv9tw = LJcpRibAv9tw +1;
            };
        }
        for (NuOTkD = 1; NuOTkD < n; NuOTkD = NuOTkD +1) {
            LJcpRibAv9tw = 0;
            while (LJcpRibAv9tw < n - NuOTkD) {
                j = LJcpRibAv9tw +NuOTkD;
                f[LJcpRibAv9tw][j] = jA3WI7FZkR (f[LJcpRibAv9tw +1][j] + QvxAomKnVr (LJcpRibAv9tw, n - 1 - NuOTkD), f[LJcpRibAv9tw][j - 1] + QvxAomKnVr (j, n - 1 - NuOTkD));
                ++LJcpRibAv9tw;
            };
        }
        printf ("%d\n", f[0][n - 1]);
        scanf ("%d", &n);
    }
    return 0;
}

