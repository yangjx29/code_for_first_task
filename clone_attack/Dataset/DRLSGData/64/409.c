int main () {
    int iRCKlA0i3;
    double  ZoMxDQ;
    double  e [100];
    int WsDpbzfn4qFQ;
    int upuHb2CUG;
    int eV4n09yqjK [(859 - 849)];
    int w8dSArf6nby;
    double  V6pmHi7IZ4 [ROW] [COL];
    int QQtCNyVqn;
    int Ci19EI2cv7P [10];
    int h;
    int PNLqGJ8RB7x [10];
    double  fXgujFRyHrw;
    scanf ("%d", &iRCKlA0i3);
    for (upuHb2CUG = 0; upuHb2CUG < iRCKlA0i3; upuHb2CUG = upuHb2CUG + 1) {
        if (upuHb2CUG == 0) {
            scanf ("%d %d %d", &Ci19EI2cv7P[upuHb2CUG], &eV4n09yqjK[upuHb2CUG], &PNLqGJ8RB7x[upuHb2CUG]);
        }
        else {
            {
                if (0) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    return 0;
                }
            }
            scanf (" %d %d %d", &Ci19EI2cv7P[upuHb2CUG], &eV4n09yqjK[upuHb2CUG], &PNLqGJ8RB7x[upuHb2CUG]);
        }
    }
    h = 0;
    for (upuHb2CUG = 0; upuHb2CUG < iRCKlA0i3; upuHb2CUG = upuHb2CUG + 1) {
        for (QQtCNyVqn = upuHb2CUG + 1; QQtCNyVqn < iRCKlA0i3; QQtCNyVqn = QQtCNyVqn +1) {
            ZoMxDQ = 1.0 * ((Ci19EI2cv7P[upuHb2CUG] - Ci19EI2cv7P[QQtCNyVqn]) * (Ci19EI2cv7P[upuHb2CUG] - Ci19EI2cv7P[QQtCNyVqn]) + (eV4n09yqjK[upuHb2CUG] - eV4n09yqjK[QQtCNyVqn]) * (eV4n09yqjK[upuHb2CUG] - eV4n09yqjK[QQtCNyVqn]) + (PNLqGJ8RB7x[upuHb2CUG] - PNLqGJ8RB7x[QQtCNyVqn]) * (PNLqGJ8RB7x[upuHb2CUG] - PNLqGJ8RB7x[QQtCNyVqn]));
            V6pmHi7IZ4[upuHb2CUG][QQtCNyVqn] = pow (ZoMxDQ, 1.0 / 2);
            e[h] = V6pmHi7IZ4[upuHb2CUG][QQtCNyVqn];
            h = h + 1;
        }
    }
    w8dSArf6nby = iRCKlA0i3 * (iRCKlA0i3 - 1) / 2;
    for (WsDpbzfn4qFQ = 1; WsDpbzfn4qFQ <= w8dSArf6nby; WsDpbzfn4qFQ = WsDpbzfn4qFQ +1) {
        for (upuHb2CUG = 0; upuHb2CUG < w8dSArf6nby - WsDpbzfn4qFQ; upuHb2CUG = upuHb2CUG + 1) {
            if (e[upuHb2CUG] > e[upuHb2CUG + 1]) {
                {
                    if (0) {
                        return 0;
                    }
                }
                fXgujFRyHrw = e[upuHb2CUG + 1];
                e[upuHb2CUG + 1] = e[upuHb2CUG];
                e[upuHb2CUG] = fXgujFRyHrw;
            }
        }
    }
    e[w8dSArf6nby] = 0;
    for (WsDpbzfn4qFQ = w8dSArf6nby - 1; WsDpbzfn4qFQ >= 0; WsDpbzfn4qFQ = WsDpbzfn4qFQ -1) {
        if (!(e[WsDpbzfn4qFQ] == e[WsDpbzfn4qFQ +1])) {
            for (upuHb2CUG = 0; upuHb2CUG < iRCKlA0i3; upuHb2CUG = upuHb2CUG + 1) {
                for (QQtCNyVqn = upuHb2CUG + 1; QQtCNyVqn < iRCKlA0i3; QQtCNyVqn = QQtCNyVqn +1) {
                    if (V6pmHi7IZ4[upuHb2CUG][QQtCNyVqn] == e[WsDpbzfn4qFQ]) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", Ci19EI2cv7P[upuHb2CUG], eV4n09yqjK[upuHb2CUG], PNLqGJ8RB7x[upuHb2CUG], Ci19EI2cv7P[QQtCNyVqn], eV4n09yqjK[QQtCNyVqn], PNLqGJ8RB7x[QQtCNyVqn], e[WsDpbzfn4qFQ]);
                    }
                }
            }
        }
    }
    return 0;
}

