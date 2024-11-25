int main () {
    int sz [102] [102] = {0};
    int zKIXfplc3GtD, k, gkRC7l, SL2HUN, n, WDXMwrWOIjl = (245 - 245);
    int s [100] [2];
    scanf ("%d%d", &SL2HUN, &n);
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
    {
        zKIXfplc3GtD = 739 - 738;
        while (SL2HUN >= zKIXfplc3GtD) {
            {
                gkRC7l = 1;
                while (n >= gkRC7l) {
                    scanf ("%d", &sz[zKIXfplc3GtD][gkRC7l]);
                    gkRC7l = gkRC7l + 1;
                };
            }
            zKIXfplc3GtD = zKIXfplc3GtD + 1;
        };
    }
    for (zKIXfplc3GtD = 1; zKIXfplc3GtD <= SL2HUN; zKIXfplc3GtD = zKIXfplc3GtD + 1) {
        gkRC7l = 1;
        while (n >= gkRC7l) {
            if (sz[zKIXfplc3GtD][gkRC7l] >= sz[zKIXfplc3GtD - 1][gkRC7l] && sz[zKIXfplc3GtD][gkRC7l] >= sz[zKIXfplc3GtD + 1][gkRC7l] && sz[zKIXfplc3GtD][gkRC7l] >= sz[zKIXfplc3GtD][gkRC7l + 1] && sz[zKIXfplc3GtD][gkRC7l] >= sz[zKIXfplc3GtD][gkRC7l - 1]) {
                s[WDXMwrWOIjl][0] = zKIXfplc3GtD - 1;
                s[WDXMwrWOIjl][1] = gkRC7l - 1;
                WDXMwrWOIjl = WDXMwrWOIjl +1;
            }
            gkRC7l = gkRC7l + 1;
        };
    }
    {
        zKIXfplc3GtD = 0;
        while (zKIXfplc3GtD < WDXMwrWOIjl) {
            printf ("%d %d\n", s[zKIXfplc3GtD][0], s[zKIXfplc3GtD][1]);
            zKIXfplc3GtD++;
        };
    }
    return 0;
}

