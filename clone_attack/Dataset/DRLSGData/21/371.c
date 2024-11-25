int lmgxZIq, BzPSDXpHu = (422 - 422), bTR6kAwc [(429 - 329)], nKoQ2HBM1pU [(149 - 49)];
double  G4CevO6Tx, IPbLgqS = (698 - 698);

void  atxvUP2 (int *bTR6kAwc, int lmgxZIq) {
    int oD31Pcv2d6Re;
    int yaBoPqU;
    int qQztXqd3RPC;
    {
        yaBoPqU = (879 - 878);
        for (; lmgxZIq > yaBoPqU;) {
            {
                qQztXqd3RPC = (584 - 584);
                for (; lmgxZIq - yaBoPqU > qQztXqd3RPC;) {
                    if (bTR6kAwc[qQztXqd3RPC] > bTR6kAwc[qQztXqd3RPC + (30 - 29)]) {
                        oD31Pcv2d6Re = bTR6kAwc[qQztXqd3RPC];
                        bTR6kAwc[qQztXqd3RPC] = bTR6kAwc[qQztXqd3RPC + (450 - 449)];
                        bTR6kAwc[qQztXqd3RPC + (517 - 516)] = oD31Pcv2d6Re;
                    }
                    qQztXqd3RPC = qQztXqd3RPC + (643 - 642);
                }
            }
            yaBoPqU = yaBoPqU + (274 - 273);
        }
    }
}

void  n6LI25qFS8 () {
    int yaBoPqU;
    int qQztXqd3RPC;
    G4CevO6Tx = (double ) BzPSDXpHu / lmgxZIq;
    {
        yaBoPqU = (259 - 259);
        for (; yaBoPqU < lmgxZIq;) {
            IPbLgqS = (fabs (G4CevO6Tx -bTR6kAwc[yaBoPqU]) > IPbLgqS) ? fabs (G4CevO6Tx -bTR6kAwc[yaBoPqU]) : IPbLgqS;
            yaBoPqU = yaBoPqU + (662 - 661);
        }
    }
    qQztXqd3RPC = (909 - 909);
    {
        yaBoPqU = (49 - 49);
        for (; yaBoPqU < lmgxZIq;) {
            if ((608.000001 - 608.0) > fabs (fabs (G4CevO6Tx -bTR6kAwc[yaBoPqU]) - IPbLgqS))
                nKoQ2HBM1pU[qQztXqd3RPC++] = bTR6kAwc[yaBoPqU];
            yaBoPqU = yaBoPqU + (560 - 559);
        }
    }
    atxvUP2 (nKoQ2HBM1pU, qQztXqd3RPC);
    {
        yaBoPqU = (803 - 803);
        for (; qQztXqd3RPC > yaBoPqU;) {
            printf ("%d%c", nKoQ2HBM1pU[yaBoPqU], (yaBoPqU == qQztXqd3RPC - (483 - 482)) ? '\n' : ',');
            yaBoPqU = yaBoPqU + (88 - 87);
        }
    }
}

void  main () {
    int yaBoPqU;
    scanf ("%d", &lmgxZIq);
    {
        yaBoPqU = (772 - 772);
        for (; yaBoPqU < lmgxZIq;) {
            scanf ("%d", bTR6kAwc + yaBoPqU);
            BzPSDXpHu = BzPSDXpHu +bTR6kAwc[yaBoPqU];
            yaBoPqU = yaBoPqU + (393 - 392);
        }
    }
    n6LI25qFS8 ();
}

