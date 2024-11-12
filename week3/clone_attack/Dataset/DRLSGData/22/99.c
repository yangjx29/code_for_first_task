main () {
    char lHaXieYsnT [400];
    int SRPFZHBnDcNY;
    int apQhNHRtkX2x;
    int lY89dtLnF [400];
    int R5r2y7o;
    int nR2EcwlCz;
    int Q1dIT96;
    {
        Q1dIT96 = 0;
        for (; 1;) {
            scanf ("%d", &lY89dtLnF[Q1dIT96]);
            scanf ("%c", &lHaXieYsnT[Q1dIT96]);
            if (!('\n' != lHaXieYsnT[Q1dIT96]))
                break;
            Q1dIT96++;
        }
    }
    apQhNHRtkX2x = lY89dtLnF[0];
    R5r2y7o = 0;
    {
        nR2EcwlCz = 1;
        for (; nR2EcwlCz <= Q1dIT96;) {
            if (apQhNHRtkX2x < lY89dtLnF[nR2EcwlCz]) {
                apQhNHRtkX2x = lY89dtLnF[nR2EcwlCz];
                R5r2y7o = nR2EcwlCz;
            }
            nR2EcwlCz = nR2EcwlCz + 1;
        }
    }
    {
        nR2EcwlCz = 0;
        for (; nR2EcwlCz <= Q1dIT96;) {
            if (!(apQhNHRtkX2x != lY89dtLnF[nR2EcwlCz]))
                lY89dtLnF[nR2EcwlCz] = 0;
            nR2EcwlCz++;
        }
    }
    apQhNHRtkX2x = lY89dtLnF[0];
    {
        nR2EcwlCz = 1;
        for (; nR2EcwlCz <= Q1dIT96;) {
            if (lY89dtLnF[nR2EcwlCz] > apQhNHRtkX2x) {
                apQhNHRtkX2x = lY89dtLnF[nR2EcwlCz];
            }
            nR2EcwlCz++;
        }
    }
    {
        nR2EcwlCz = 1;
        for (; nR2EcwlCz <= Q1dIT96;) {
            if (lY89dtLnF[nR2EcwlCz] != lY89dtLnF[0])
                break;
            nR2EcwlCz++;
        }
    }
    SRPFZHBnDcNY = 1;
    if (nR2EcwlCz == Q1dIT96 +1)
        SRPFZHBnDcNY = 0;
    R5r2y7o = 0;
    if (SRPFZHBnDcNY == 0)
        ;
    else
        printf ("%d", apQhNHRtkX2x);
}

