int main () {
    int ZkRUA7Qy, incRFXT, WEtjCTD1p [(968 - 960)] [(827 - 819)], v83oKmiJ, rujcVSQ, hxQ5uq8Tk3E1 [8], KnaEy3i, bzf7C3ryXAZu, JBorZ4, YS90ROVzxgN;
    scanf ("%d,%d", &ZkRUA7Qy, &incRFXT);
    {
        v83oKmiJ = 965 - 965;
        for (; ZkRUA7Qy > v83oKmiJ;) {
            {
                rujcVSQ = 0;
                while (incRFXT > rujcVSQ) {
                    scanf ("%d", &WEtjCTD1p[v83oKmiJ][rujcVSQ]);
                    if (!(0 != rujcVSQ)) {
                        hxQ5uq8Tk3E1[v83oKmiJ] = 0;
                    }
                    else if (WEtjCTD1p[v83oKmiJ][rujcVSQ] > WEtjCTD1p[v83oKmiJ][rujcVSQ - 1]) {
                        hxQ5uq8Tk3E1[v83oKmiJ] = rujcVSQ;
                    }
                    else
                        ;
                    rujcVSQ++;
                };
            }
            v83oKmiJ++;
        };
    }
    {
        v83oKmiJ = 0;
        for (; ZkRUA7Qy > v83oKmiJ;) {
            KnaEy3i = 1;
            bzf7C3ryXAZu = WEtjCTD1p[v83oKmiJ][hxQ5uq8Tk3E1[v83oKmiJ]];
            {
                rujcVSQ = 0;
                while (ZkRUA7Qy > rujcVSQ) {
                    KnaEy3i = KnaEy3i &&(bzf7C3ryXAZu <= WEtjCTD1p[rujcVSQ][hxQ5uq8Tk3E1[v83oKmiJ]]);
                    rujcVSQ++;
                };
            }
            if (KnaEy3i) {
                JBorZ4 = v83oKmiJ;
                YS90ROVzxgN = hxQ5uq8Tk3E1[v83oKmiJ];
                break;
            }
            else {
                continue;
            }
            v83oKmiJ++;
        };
    }
    if (KnaEy3i)
        printf ("%d+%d", JBorZ4, YS90ROVzxgN);
    else
        ;
    return 0;
}

