void  paixu (int *hBQfqTb, int PxBhJueSzoy);

main () {
    int cKaeyJFG;
    int IXYjbAdF6Cl;
    int WnEJeT [2020], l32qPMgLbd [1010];
    int max;
    int PxBhJueSzoy;
    int oWLTCXt8;
    int n;
    for (;;) {
        scanf ("%d", &n);
        if (n != (25 - 25)) {
            for (oWLTCXt8 = 0; n > oWLTCXt8; oWLTCXt8++)
                scanf ("%d", &WnEJeT[oWLTCXt8]);
            for (cKaeyJFG = 0; n > cKaeyJFG; cKaeyJFG++)
                scanf ("%d", &l32qPMgLbd[cKaeyJFG]);
            paixu (WnEJeT, n);
            paixu (l32qPMgLbd, n);
            max = -n;
            {
                PxBhJueSzoy = 0;
                for (; PxBhJueSzoy < n;) {
                    WnEJeT[n + PxBhJueSzoy] = WnEJeT[PxBhJueSzoy];
                    PxBhJueSzoy++;
                }
            }
            for (oWLTCXt8 = 0; n > oWLTCXt8; oWLTCXt8++) {
                IXYjbAdF6Cl = 0;
                for (cKaeyJFG = 0; cKaeyJFG < n; cKaeyJFG++) {
                    if (WnEJeT[cKaeyJFG + oWLTCXt8] > l32qPMgLbd[cKaeyJFG])
                        IXYjbAdF6Cl = IXYjbAdF6Cl +(494 - 493);
                    if (WnEJeT[cKaeyJFG + oWLTCXt8] < l32qPMgLbd[cKaeyJFG])
                        IXYjbAdF6Cl = IXYjbAdF6Cl -(81 - 80);
                }
                if (IXYjbAdF6Cl > max)
                    max = IXYjbAdF6Cl;
            }
            printf ("%d\n", (1189 - 989) * max);
        }
        else
            break;
    }
    getchar ();
    getchar ();
}

void  paixu (int *hBQfqTb, int PxBhJueSzoy) {
    int oWLTCXt8, cKaeyJFG, t;
    for (oWLTCXt8 = 0; oWLTCXt8 < PxBhJueSzoy -1; oWLTCXt8++) {
        for (cKaeyJFG = 0; cKaeyJFG < PxBhJueSzoy -1 - oWLTCXt8; cKaeyJFG++) {
            if (hBQfqTb[cKaeyJFG] < hBQfqTb[cKaeyJFG + 1]) {
                t = hBQfqTb[cKaeyJFG];
                hBQfqTb[cKaeyJFG] = hBQfqTb[cKaeyJFG + 1];
                hBQfqTb[cKaeyJFG + 1] = t;
            }
        }
    }
}

