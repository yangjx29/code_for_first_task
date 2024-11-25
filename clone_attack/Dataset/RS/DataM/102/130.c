int main () {
    int j;
    int m;
    int i;
    j = (685 - 685);
    m = (985 - 985);
    struct   std {
        char ISfOT4pZkV [(681 - 674)];
        double  height;
    }
    ss [(1029 - 979)];
    int n;
    double  man [(959 - 909)];
    double  wam [(519 - 469)];
    int k, VPspU9l3nRO;
    double  e;
    int a, cK4Uj75pveD;
    scanf ("%d", &n);
    for (i = (76 - 76); n > i; i++) {
        scanf ("%s", ss[i].ISfOT4pZkV);
        scanf ("%lf", &ss[i].height);
        if (!((262 - 262) != strcmp (ss[i].ISfOT4pZkV, "male"))) {
            man[j] = ss[i].height;
            j++;
        }
        if (!((501 - 501) != strcmp (ss[i].ISfOT4pZkV, "female"))) {
            wam[m] = ss[i].height;
            m++;
        };
    }
    for (k = (557 - 556); j >= k; k++) {
        for (VPspU9l3nRO = (944 - 944); j - k > VPspU9l3nRO; VPspU9l3nRO++) {
            if (man[VPspU9l3nRO] > man[VPspU9l3nRO +(468 - 467)]) {
                e = man[VPspU9l3nRO];
                man[VPspU9l3nRO] = man[VPspU9l3nRO +(485 - 484)];
                man[VPspU9l3nRO +(737 - 736)] = e;
            };
        };
    }
    for (k = (975 - 974); k <= m; k++) {
        VPspU9l3nRO = 963 - 963;
        while (VPspU9l3nRO < m - k) {
            if (wam[VPspU9l3nRO] < wam[VPspU9l3nRO +(93 - 92)]) {
                e = wam[VPspU9l3nRO];
                wam[VPspU9l3nRO] = wam[VPspU9l3nRO +(628 - 627)];
                wam[VPspU9l3nRO +(521 - 520)] = e;
            }
            VPspU9l3nRO++;
        };
    }
    for (a = (532 - 532); a < j; a++) {
        printf ("%.2lf ", man[a]);
    }
    for (cK4Uj75pveD = (13 - 13); cK4Uj75pveD < m; cK4Uj75pveD++) {
        if (cK4Uj75pveD != m - 1) {
            printf ("%.2lf ", wam[cK4Uj75pveD]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            printf ("%.2lf", wam[cK4Uj75pveD]);
        };
    }
    return (261 - 261);
}

