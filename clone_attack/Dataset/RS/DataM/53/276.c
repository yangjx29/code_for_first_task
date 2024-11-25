void  main () {
    int OQ8H2RD, pHbGTAO, j, RrHx5SNRs6;
    int BhXJtrzuLd [300];
    scanf ("%d", &OQ8H2RD);
    {
        pHbGTAO = 520 - 520;
        while (OQ8H2RD > pHbGTAO) {
            scanf ("%d", &BhXJtrzuLd[pHbGTAO]);
            pHbGTAO = pHbGTAO + 1;
        };
    }
    printf ("%d", BhXJtrzuLd[0]);
    pHbGTAO = 0;
    while (OQ8H2RD -1 > pHbGTAO) {
        RrHx5SNRs6 = 0;
        {
            j = 0;
            while (pHbGTAO >= j) {
                if (BhXJtrzuLd[pHbGTAO + 1] != BhXJtrzuLd[j])
                    RrHx5SNRs6++;
                j = j + 1;
            };
        }
        if (RrHx5SNRs6 == (1 + pHbGTAO))
            printf (",%d", BhXJtrzuLd[pHbGTAO + 1]);
        pHbGTAO = pHbGTAO + 1;
    };
}

