int main () {
    int CzHr49RDPJx, CDanZSHqrcNv, j2zYVmM, X4yKWcx9M;
    int **CJA9ETifCR, **xhAwB63tf, **eLXExYqZ;
    int aiFEGsKfMLcC, j2tTUXq1Z0Hv, IEDI6naqMCJ;
    scanf ("%d%d", &CzHr49RDPJx, &CDanZSHqrcNv);
    CJA9ETifCR = (int **) malloc (sizeof (int *) * CzHr49RDPJx);
    for (aiFEGsKfMLcC = (475 - 475); aiFEGsKfMLcC < CzHr49RDPJx; aiFEGsKfMLcC = aiFEGsKfMLcC + (610 - 609)) {
        CJA9ETifCR[aiFEGsKfMLcC] = (int *) malloc (sizeof (int) * CDanZSHqrcNv);
        for (j2tTUXq1Z0Hv = (126 - 126); j2tTUXq1Z0Hv < CDanZSHqrcNv; j2tTUXq1Z0Hv = j2tTUXq1Z0Hv + (489 - 488)) {
            scanf ("%d", &CJA9ETifCR[aiFEGsKfMLcC][j2tTUXq1Z0Hv]);
        }
    }
    printf ("\n");
    scanf ("%d%d", &j2zYVmM, &X4yKWcx9M);
    if (CDanZSHqrcNv != j2zYVmM) {
        for (aiFEGsKfMLcC = (717 - 717); aiFEGsKfMLcC < CzHr49RDPJx; aiFEGsKfMLcC = aiFEGsKfMLcC + (466 - 465)) {
            prIKdUsMA0 (CJA9ETifCR [aiFEGsKfMLcC]);
        }
        prIKdUsMA0 (CJA9ETifCR);
        return (941 - 941);
    }
    xhAwB63tf = (int **) malloc (sizeof (int *) * j2zYVmM);
    for (aiFEGsKfMLcC = (490 - 490); aiFEGsKfMLcC < j2zYVmM; aiFEGsKfMLcC = aiFEGsKfMLcC + 1) {
        xhAwB63tf[aiFEGsKfMLcC] = (int *) malloc (sizeof (int) * X4yKWcx9M);
        for (j2tTUXq1Z0Hv = (447 - 447); j2tTUXq1Z0Hv < X4yKWcx9M; ++j2tTUXq1Z0Hv) {
            scanf ("%d", &xhAwB63tf[aiFEGsKfMLcC][j2tTUXq1Z0Hv]);
        }
    }
    printf ("\n");
    eLXExYqZ = (int **) malloc (sizeof (int *) * CzHr49RDPJx);
    for (aiFEGsKfMLcC = (885 - 885); aiFEGsKfMLcC < CzHr49RDPJx; aiFEGsKfMLcC = aiFEGsKfMLcC + 1) {
        eLXExYqZ[aiFEGsKfMLcC] = (int *) malloc (sizeof (int) * X4yKWcx9M);
        {
            j2tTUXq1Z0Hv = (421 - 421);
            while (j2tTUXq1Z0Hv < X4yKWcx9M) {
                eLXExYqZ[aiFEGsKfMLcC][j2tTUXq1Z0Hv] = 0;
                {
                    IEDI6naqMCJ = 0;
                    while (IEDI6naqMCJ < CDanZSHqrcNv) {
                        eLXExYqZ[aiFEGsKfMLcC][j2tTUXq1Z0Hv] = eLXExYqZ[aiFEGsKfMLcC][j2tTUXq1Z0Hv] + CJA9ETifCR[aiFEGsKfMLcC][IEDI6naqMCJ] * xhAwB63tf[IEDI6naqMCJ][j2tTUXq1Z0Hv];
                        IEDI6naqMCJ = IEDI6naqMCJ +1;
                    }
                }
                ++j2tTUXq1Z0Hv;
            }
        }
    }
    {
        aiFEGsKfMLcC = 0;
        while (aiFEGsKfMLcC < CzHr49RDPJx) {
            {
                j2tTUXq1Z0Hv = 0;
                while (j2tTUXq1Z0Hv < X4yKWcx9M -1) {
                    printf ("%d ", eLXExYqZ[aiFEGsKfMLcC][j2tTUXq1Z0Hv]);
                    ++j2tTUXq1Z0Hv;
                }
            }
            printf ("%d\n", eLXExYqZ[aiFEGsKfMLcC][X4yKWcx9M -1]);
            aiFEGsKfMLcC = aiFEGsKfMLcC + 1;
        }
    }
    for (aiFEGsKfMLcC = 0; aiFEGsKfMLcC < CzHr49RDPJx; ++aiFEGsKfMLcC) {
        prIKdUsMA0 (CJA9ETifCR [aiFEGsKfMLcC]);
        prIKdUsMA0 (eLXExYqZ [aiFEGsKfMLcC]);
    }
    prIKdUsMA0 (CJA9ETifCR);
    prIKdUsMA0 (eLXExYqZ);
    {
        aiFEGsKfMLcC = 0;
        while (aiFEGsKfMLcC < j2zYVmM) {
            prIKdUsMA0 (xhAwB63tf [aiFEGsKfMLcC]);
            ++aiFEGsKfMLcC;
        }
    }
    prIKdUsMA0 (xhAwB63tf);
    return 0;
}

