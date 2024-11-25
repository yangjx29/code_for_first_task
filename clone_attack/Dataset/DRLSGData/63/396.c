int main (int pDFqTs, char *Ospagu5lNeC []) {
    int MBs34lM [100] [100], oNEsCG7rDi2T [100] [100];
    int zs5dpRFSBrW, N3DMbSP, mtfQOu, nJOEvCLiAM, uLDsBT, lyXq0To7pm, scYTUE3QdAB, ko0ByKb67, rVINOAvH8p, XlbJ4j, Fu5s4EMpR6PO;
    scanf ("%d%d", &zs5dpRFSBrW, &N3DMbSP);
    {
        scYTUE3QdAB = 0;
        while (zs5dpRFSBrW > scYTUE3QdAB) {
            for (ko0ByKb67 = 0; ko0ByKb67 < N3DMbSP; ko0ByKb67++)
                scanf ("%d", &MBs34lM[scYTUE3QdAB][ko0ByKb67]);
            scYTUE3QdAB++;
        }
    }
    scanf ("%d%d", &mtfQOu, &nJOEvCLiAM);
    {
        rVINOAvH8p = 0;
        while (rVINOAvH8p < mtfQOu) {
            for (XlbJ4j = 0; XlbJ4j < nJOEvCLiAM; XlbJ4j = XlbJ4j +1)
                scanf ("%d", &oNEsCG7rDi2T[rVINOAvH8p][XlbJ4j]);
            rVINOAvH8p++;
        }
    }
    int GTgpqSE [100] [100];
    int BtGj8h;
    for (uLDsBT = 0; uLDsBT < zs5dpRFSBrW; uLDsBT++) {
        for (lyXq0To7pm = 0; nJOEvCLiAM > lyXq0To7pm; lyXq0To7pm = lyXq0To7pm + 1) {
            {
                BtGj8h = 0;
                for (Fu5s4EMpR6PO = 0; Fu5s4EMpR6PO < N3DMbSP; Fu5s4EMpR6PO++)
                    BtGj8h = BtGj8h +MBs34lM[uLDsBT][Fu5s4EMpR6PO] * oNEsCG7rDi2T[Fu5s4EMpR6PO][lyXq0To7pm];
            }
            GTgpqSE[uLDsBT][lyXq0To7pm] = BtGj8h;
        }
    }
    for (uLDsBT = 0; uLDsBT < zs5dpRFSBrW; uLDsBT++) {
        printf ("%d", GTgpqSE[uLDsBT][0]);
        for (lyXq0To7pm = 1; lyXq0To7pm < nJOEvCLiAM; lyXq0To7pm++) {
            {
                if (0) {
                    return 0;
                }
            }
            printf (" %d", GTgpqSE[uLDsBT][lyXq0To7pm]);
        }
    }
    return 0;
}

