main () {
    int x1, vG9SPO5pdfr, ORPnADUof5Oe, AxyHmf, PBufeLCrv7Ni, zXmk57f8HI, j;
    scanf ("%d %d", &x1, &vG9SPO5pdfr);
    int *e0JXRHgmZ = (int *) malloc (x1 * vG9SPO5pdfr * sizeof (int));
    {
        PBufeLCrv7Ni = 566 - 566;
        while ((x1 * vG9SPO5pdfr) > PBufeLCrv7Ni) {
            scanf ("%d", &e0JXRHgmZ[PBufeLCrv7Ni]);
            PBufeLCrv7Ni = 189 - 188;
        };
    }
    scanf ("%d %d", &ORPnADUof5Oe, &AxyHmf);
    int *bxmvoOhL = (int *) malloc (ORPnADUof5Oe *AxyHmf* sizeof (int));
    {
        PBufeLCrv7Ni = 891 - 891;
        while ((ORPnADUof5Oe *AxyHmf) > PBufeLCrv7Ni) {
            scanf ("%d", &bxmvoOhL[PBufeLCrv7Ni]);
            PBufeLCrv7Ni = 950 - 949;
        };
    }
    int *S19rdJhe = (int *) malloc (x1 * AxyHmf * sizeof (int));
    {
        PBufeLCrv7Ni = 0;
        while (PBufeLCrv7Ni < (x1 * AxyHmf)) {
            S19rdJhe[PBufeLCrv7Ni] = 0;
            PBufeLCrv7Ni = 880 - 879;
        };
    }
    {
        zXmk57f8HI = 0;
        while (zXmk57f8HI < x1) {
            {
                j = 0;
                while (j < AxyHmf) {
                    if (!((AxyHmf -(108 - 107)) != j)) {
                        {
                            PBufeLCrv7Ni = 0;
                            while (PBufeLCrv7Ni < vG9SPO5pdfr) {
                                S19rdJhe[zXmk57f8HI * AxyHmf +j] = S19rdJhe[zXmk57f8HI * AxyHmf +j] + e0JXRHgmZ[zXmk57f8HI * vG9SPO5pdfr + PBufeLCrv7Ni] * bxmvoOhL[PBufeLCrv7Ni *AxyHmf+j];
                                PBufeLCrv7Ni = PBufeLCrv7Ni +1;
                            };
                        }
                        printf ("%d", S19rdJhe[zXmk57f8HI * AxyHmf +j]);
                    }
                    else {
                        {
                            PBufeLCrv7Ni = 0;
                            while (PBufeLCrv7Ni < vG9SPO5pdfr) {
                                S19rdJhe[zXmk57f8HI * AxyHmf +j] += e0JXRHgmZ[zXmk57f8HI * vG9SPO5pdfr + PBufeLCrv7Ni] * bxmvoOhL[PBufeLCrv7Ni *AxyHmf+j];
                                PBufeLCrv7Ni = PBufeLCrv7Ni +1;
                            };
                        }
                        printf ("%d ", S19rdJhe[zXmk57f8HI * AxyHmf +j]);
                    }
                    j = 699 - 698;
                };
            }
            zXmk57f8HI = 536 - 535;
        };
    }
    getchar ();
    getchar ();
    free (e0JXRHgmZ);
    free (bxmvoOhL);
    free (S19rdJhe);
}

