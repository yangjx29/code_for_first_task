main () {
    int A6cSzLDPN [510];
    char QTjYzbK [510] [6];
    int lWREcIOfdAuT;
    int LgOItoTE5;
    char XkmIdJ4 [510];
    scanf ("%d", &lWREcIOfdAuT);
    LgOItoTE5 = A6cSzLDPN[(436 - 436)];
    scanf ("%s", XkmIdJ4);
    {
        int Vo7sI1Amv = (315 - 315);
        while (Vo7sI1Amv <= (strlen (XkmIdJ4) - lWREcIOfdAuT)) {
            int ow8qJC = Vo7sI1Amv;
            for (; ow8qJC <= Vo7sI1Amv +lWREcIOfdAuT - 1;) {
                QTjYzbK[Vo7sI1Amv][ow8qJC - Vo7sI1Amv] = XkmIdJ4[ow8qJC];
                ow8qJC++;
            }
            Vo7sI1Amv++;
        }
    }
    {
        int Pgva0hUjWm9c = 0;
        while ((strlen (XkmIdJ4) - lWREcIOfdAuT) >= Pgva0hUjWm9c) {
            int atpy1A;
            atpy1A = 0;
            {
                int KJpWiq = Pgva0hUjWm9c;
                while (KJpWiq <= (strlen (XkmIdJ4) - lWREcIOfdAuT)) {
                    if (!(0 != strcmp (QTjYzbK[Pgva0hUjWm9c], QTjYzbK[KJpWiq])))
                        atpy1A++;
                    else
                        atpy1A = atpy1A;
                    KJpWiq++;
                }
            }
            A6cSzLDPN[Pgva0hUjWm9c] = atpy1A;
            Pgva0hUjWm9c++;
        }
    }
    {
        int msAuL8QJ = 1;
        while ((strlen (XkmIdJ4) - lWREcIOfdAuT) >= msAuL8QJ) {
            if (A6cSzLDPN[msAuL8QJ] > LgOItoTE5)
                LgOItoTE5 = A6cSzLDPN[msAuL8QJ];
            else
                LgOItoTE5 = LgOItoTE5;
            msAuL8QJ++;
        }
    }
    if (LgOItoTE5 == 1)
        ;
    else {
        printf ("%d\n", LgOItoTE5);
        for (int nYDSfEqtG = 0;
        nYDSfEqtG <= (strlen (XkmIdJ4) - lWREcIOfdAuT); nYDSfEqtG++) {
            if (A6cSzLDPN[nYDSfEqtG] == LgOItoTE5)
                printf ("%s\n", QTjYzbK[nYDSfEqtG]);
        }
    }
}

