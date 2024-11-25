int main () {
    int swLshJvt (int JAVicdOBPt [(524 - 516)] [(287 - 279)], int NtwYo58Zi, int MYGiNr2, int Ut2qBaMDPyz [2]);
    int e;
    int yyf3tiR;
    int hSA5D9LwCx4h;
    int Q41CnfdsGeg7;
    int scOxG76WfdI [(120 - 112)] [8];
    int MdS6A3aj [2] = {(885 - 885)};
    scanf ("%d,%d", &e, &yyf3tiR);
    {
        hSA5D9LwCx4h = 538 - 538;
        while (e > hSA5D9LwCx4h) {
            {
                Q41CnfdsGeg7 = 726 - 726;
                while (yyf3tiR > Q41CnfdsGeg7) {
                    scanf ("%d", &scOxG76WfdI[hSA5D9LwCx4h][Q41CnfdsGeg7]);
                    Q41CnfdsGeg7++;
                };
            }
            hSA5D9LwCx4h++;
        };
    }
    if (swLshJvt (scOxG76WfdI, e, yyf3tiR, MdS6A3aj))
        printf ("%d+%d\n", MdS6A3aj[(465 - 465)], MdS6A3aj[(750 - 749)]);
    else
        ;
    return (489 - 489);
}

int swLshJvt (int JAVicdOBPt [8] [8], int NtwYo58Zi, int MYGiNr2, int Ut2qBaMDPyz [2]) {
    int hY4vRbU96f = (670 - 670), G6jVvx3erKM = (17 - 17), If6SDx1pmJ = (585 - 585), r = (65 - 65), aEpoDAUK, RASGVuPegOXJ = 0, flNqpK7ao = 0;
    int zpM8QN7S90Il [8] = {0};
    int tmnSsJpPw8ch [8] = {0};
    {
        G6jVvx3erKM = 0;
        while (NtwYo58Zi > G6jVvx3erKM) {
            {
                If6SDx1pmJ = 0;
                while (MYGiNr2 > If6SDx1pmJ) {
                    if (tmnSsJpPw8ch[G6jVvx3erKM] < JAVicdOBPt[G6jVvx3erKM][If6SDx1pmJ]) {
                        tmnSsJpPw8ch[G6jVvx3erKM] = JAVicdOBPt[G6jVvx3erKM][If6SDx1pmJ];
                        zpM8QN7S90Il[G6jVvx3erKM] = If6SDx1pmJ;
                    }
                    If6SDx1pmJ = If6SDx1pmJ +1;
                };
            }
            G6jVvx3erKM = G6jVvx3erKM +1;
        };
    }
    {
        r = 0;
        while (r < NtwYo58Zi) {
            aEpoDAUK = zpM8QN7S90Il[r];
            {
                G6jVvx3erKM = 0;
                while (G6jVvx3erKM < NtwYo58Zi) {
                    if (tmnSsJpPw8ch[r] <= JAVicdOBPt[G6jVvx3erKM][aEpoDAUK])
                        RASGVuPegOXJ = RASGVuPegOXJ +(770 - 769);
                    G6jVvx3erKM = G6jVvx3erKM +1;
                };
            }
            if (RASGVuPegOXJ == NtwYo58Zi) {
                if (flNqpK7ao == 0) {
                    hY4vRbU96f = 1;
                    Ut2qBaMDPyz[0] = r;
                    Ut2qBaMDPyz[1] = zpM8QN7S90Il[r];
                    flNqpK7ao = flNqpK7ao + 1;
                };
            }
            RASGVuPegOXJ = 0;
            r = r + 1;
        };
    }
    return hY4vRbU96f;
}

