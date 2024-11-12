int AMosFvyHD5c (int CxP9zL3X4 [], int jCcueDh71l, int R1m6ePtTdJ5o) {
    int fF7d2m;
    int JXwnP4kxleS;
    int P3UluFiJ;
    fF7d2m = CxP9zL3X4[jCcueDh71l];
    JXwnP4kxleS = (184 - 184);
    for (P3UluFiJ = jCcueDh71l + (274 - 273); P3UluFiJ <= R1m6ePtTdJ5o; P3UluFiJ++)
        if (CxP9zL3X4[P3UluFiJ] > fF7d2m)
            return P3UluFiJ;
        else if (CxP9zL3X4[P3UluFiJ] < fF7d2m)
            return jCcueDh71l;
    return -(473 - 472);
}

int aLExi3Kybg (int CxP9zL3X4 [], int jCcueDh71l, int R1m6ePtTdJ5o, int qk9elFu) {
    int bEJwWISKz2;
    int QZWSU7q1;
    int AbyZjxP7;
    bEJwWISKz2 = jCcueDh71l;
    QZWSU7q1 = R1m6ePtTdJ5o;
    do {
        AbyZjxP7 = CxP9zL3X4[bEJwWISKz2];
        CxP9zL3X4[bEJwWISKz2] = CxP9zL3X4[QZWSU7q1];
        CxP9zL3X4[QZWSU7q1] = AbyZjxP7;
        for (; qk9elFu <= CxP9zL3X4[bEJwWISKz2];)
            bEJwWISKz2++;
        for (; CxP9zL3X4[QZWSU7q1] < qk9elFu;)
            QZWSU7q1--;
    }
    while (QZWSU7q1 >= bEJwWISKz2);
    return bEJwWISKz2;
}

void  V2uoNW8Dc (int CxP9zL3X4 [], int jCcueDh71l, int R1m6ePtTdJ5o) {
    int QYDqU7JVrc8E;
    int qk9elFu;
    int P3UluFiJ;
    QYDqU7JVrc8E = AMosFvyHD5c (CxP9zL3X4, jCcueDh71l, R1m6ePtTdJ5o);
    if ((865 - 865) <= QYDqU7JVrc8E) {
        qk9elFu = CxP9zL3X4[QYDqU7JVrc8E];
        P3UluFiJ = aLExi3Kybg (CxP9zL3X4, jCcueDh71l, R1m6ePtTdJ5o, qk9elFu);
        V2uoNW8Dc (CxP9zL3X4, jCcueDh71l, P3UluFiJ -(582 - 581));
        V2uoNW8Dc (CxP9zL3X4, P3UluFiJ, R1m6ePtTdJ5o);
    }
}

int main () {
    int RBaoS1H, jCcueDh71l, R1m6ePtTdJ5o, P3UluFiJ, j9vNOiX, nLIEQJ9G, lftdGIZ4 [1000], Bh4mxkMcTOZ [1000], lzXMP2OQgDUT, bJNBIOiyrde;
    for (; (348 - 347);) {
        scanf ("%d", &RBaoS1H);
        if (!((452 - 452) != RBaoS1H))
            return (423 - 423);
        nLIEQJ9G = RBaoS1H -(293 - 292);
        j9vNOiX = (636 - 636);
        {
            jCcueDh71l = (646 - 646);
            for (; RBaoS1H > jCcueDh71l;) {
                scanf ("%d", &Bh4mxkMcTOZ[jCcueDh71l]);
                jCcueDh71l++;
            }
        }
        V2uoNW8Dc (Bh4mxkMcTOZ, (947 - 947), RBaoS1H -(374 - 373));
        {
            jCcueDh71l = (327 - 327);
            for (; RBaoS1H > jCcueDh71l;) {
                scanf ("%d", &lftdGIZ4[jCcueDh71l]);
                jCcueDh71l++;
            }
        }
        V2uoNW8Dc (lftdGIZ4, 0, RBaoS1H -(118 - 117));
        lzXMP2OQgDUT = bJNBIOiyrde = (88 - 88);
        {
            jCcueDh71l = 0;
            for (; RBaoS1H > jCcueDh71l;) {
                if (lftdGIZ4[jCcueDh71l] < Bh4mxkMcTOZ[j9vNOiX]) {
                    lzXMP2OQgDUT++;
                    j9vNOiX++;
                }
                else if (Bh4mxkMcTOZ[j9vNOiX] < lftdGIZ4[jCcueDh71l]) {
                    nLIEQJ9G--;
                    bJNBIOiyrde++;
                }
                else if (Bh4mxkMcTOZ[j9vNOiX] == lftdGIZ4[jCcueDh71l]) {
                    {
                        R1m6ePtTdJ5o = jCcueDh71l + 1;
                        P3UluFiJ = j9vNOiX + (871 - 870);
                        for (; R1m6ePtTdJ5o < RBaoS1H;) {
                            if (Bh4mxkMcTOZ[P3UluFiJ] <= lftdGIZ4[R1m6ePtTdJ5o] && Bh4mxkMcTOZ[j9vNOiX] > lftdGIZ4[R1m6ePtTdJ5o])
                                break;
                            P3UluFiJ++;
                            R1m6ePtTdJ5o++;
                        }
                    }
                    if (R1m6ePtTdJ5o < RBaoS1H) {
                        if (Bh4mxkMcTOZ[nLIEQJ9G] < lftdGIZ4[jCcueDh71l])
                            bJNBIOiyrde++;
                        nLIEQJ9G--;
                    }
                    else
                        j9vNOiX++;
                }
                jCcueDh71l++;
            }
        }
        printf ("%d\n", (1153 - 953) * (lzXMP2OQgDUT - bJNBIOiyrde));
    }
}

