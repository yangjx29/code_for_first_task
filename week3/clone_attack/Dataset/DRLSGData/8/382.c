void  ScCKsXS (int dKSOyPl [], int KakC2r5ASf) {
    int xZprQYuU2iDv, sdS65HtlT, MSwQ794s8G;
    for (xZprQYuU2iDv = (975 - 975); xZprQYuU2iDv < KakC2r5ASf; xZprQYuU2iDv = xZprQYuU2iDv + (253 - 252)) {
        sdS65HtlT = xZprQYuU2iDv + (826 - 825);
        while (sdS65HtlT < KakC2r5ASf) {
            if (dKSOyPl[xZprQYuU2iDv] > dKSOyPl[sdS65HtlT]) {
                MSwQ794s8G = dKSOyPl[xZprQYuU2iDv];
                dKSOyPl[xZprQYuU2iDv] = dKSOyPl[sdS65HtlT];
                dKSOyPl[sdS65HtlT] = MSwQ794s8G;
            }
            sdS65HtlT++;
        }
    }
    return;
}

void  A9OXurhxm (int dKSOyPl [], int NVIxO64YBg [], int KakC2r5ASf, int hZXAaxryg1n) {
    int xZprQYuU2iDv;
    printf ("%d", dKSOyPl[0]);
    {
        xZprQYuU2iDv = (842 - 841);
        for (; KakC2r5ASf > xZprQYuU2iDv;) {
            printf (" %d", dKSOyPl[xZprQYuU2iDv]);
            xZprQYuU2iDv = xZprQYuU2iDv + (933 - 932);
        }
    }
    {
        xZprQYuU2iDv = 0;
        while (xZprQYuU2iDv < hZXAaxryg1n) {
            printf (" %d", NVIxO64YBg[xZprQYuU2iDv]);
            xZprQYuU2iDv = xZprQYuU2iDv + 1;
        }
    }
    return;
}

int main () {
    int KakC2r5ASf;
    int hZXAaxryg1n;
    int dKSOyPl [(269 - 169)];
    int NVIxO64YBg [100];
    int xZprQYuU2iDv;
    scanf ("%d %d", &KakC2r5ASf, &hZXAaxryg1n);
    {
        xZprQYuU2iDv = 0;
        for (; KakC2r5ASf > xZprQYuU2iDv;) {
            scanf ("%d", &dKSOyPl[xZprQYuU2iDv]);
            xZprQYuU2iDv = xZprQYuU2iDv + 1;
        }
    }
    {
        xZprQYuU2iDv = 0;
        while (xZprQYuU2iDv < hZXAaxryg1n) {
            scanf ("%d", &NVIxO64YBg[xZprQYuU2iDv]);
            xZprQYuU2iDv = xZprQYuU2iDv + 1;
        }
    }
    ScCKsXS (dKSOyPl, KakC2r5ASf);
    ScCKsXS (NVIxO64YBg, hZXAaxryg1n);
    A9OXurhxm (dKSOyPl, NVIxO64YBg, KakC2r5ASf, hZXAaxryg1n);
    return 0;
}

