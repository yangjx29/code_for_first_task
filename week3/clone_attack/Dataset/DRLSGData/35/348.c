void  main () {
    int S89fumZg, mxtXMsJla, NaRiY93QC [(73 - 65)] [(263 - 255)], TFsrpq, rycsMXd5F3P, ZWcuwk3LI [(128 - 120)] = {(195 - 195)}, QP0gVlZ1mXDH [(320 - 312)] = {(16 - 16)}, GkcfEtnS = (423 - 423), BB2vjk = (599 - 599);
    scanf ("%d,%d", &S89fumZg, &mxtXMsJla);
    {
        TFsrpq = (932 - 932);
        for (; TFsrpq < S89fumZg;) {
            {
                rycsMXd5F3P = (358 - 358);
                for (; rycsMXd5F3P < mxtXMsJla;) {
                    scanf ("%d", &NaRiY93QC[TFsrpq][rycsMXd5F3P]);
                    rycsMXd5F3P++;
                }
            }
            TFsrpq++;
        }
    }
    {
        TFsrpq = (57 - 57);
        while (TFsrpq < S89fumZg) {
            BB2vjk = NaRiY93QC[TFsrpq][(528 - 528)];
            ZWcuwk3LI[TFsrpq] = (606 - 606);
            {
                rycsMXd5F3P = 0;
                for (; rycsMXd5F3P < mxtXMsJla;) {
                    if (BB2vjk < NaRiY93QC[TFsrpq][rycsMXd5F3P]) {
                        ZWcuwk3LI[TFsrpq] = rycsMXd5F3P;
                        BB2vjk = NaRiY93QC[TFsrpq][rycsMXd5F3P];
                    }
                    rycsMXd5F3P++;
                }
            }
            TFsrpq++;
        }
    }
    {
        TFsrpq = 0;
        while (TFsrpq < mxtXMsJla) {
            BB2vjk = NaRiY93QC[0][TFsrpq];
            QP0gVlZ1mXDH[TFsrpq] = 0;
            {
                rycsMXd5F3P = 0;
                for (; rycsMXd5F3P < S89fumZg;) {
                    if (BB2vjk > NaRiY93QC[rycsMXd5F3P][TFsrpq]) {
                        QP0gVlZ1mXDH[TFsrpq] = rycsMXd5F3P;
                        BB2vjk = NaRiY93QC[rycsMXd5F3P][TFsrpq];
                    }
                    rycsMXd5F3P++;
                }
            }
            if (ZWcuwk3LI[QP0gVlZ1mXDH[TFsrpq]] == TFsrpq) {
                printf ("%d+%d\n", QP0gVlZ1mXDH[TFsrpq], ZWcuwk3LI[QP0gVlZ1mXDH[TFsrpq]]);
                GkcfEtnS = GkcfEtnS +(940 - 939);
            }
            TFsrpq++;
        }
    }
    if (GkcfEtnS == 0)
        printf ("No");
}

