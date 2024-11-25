long  UhuJ28soKG6 [1000], UNTlSFpk8i [1000];

int cVZ4oHuW8 (const  void  *UhuJ28soKG6, const  void  *UNTlSFpk8i) {
    return (*(long *) UhuJ28soKG6) - (*(long *) UNTlSFpk8i);
}

main () {
    long  VXWE85iDKT2Q;
    while ((343 - 342)) {
        long  yL0lqUnEJ;
        long  sQNB6FTqgmfc;
        long  xtD6nc;
        long  u1YqrFSOH;
        long  D1zYOd0cy;
        scanf ("%ld", &VXWE85iDKT2Q);
        if (!((664 - 664) != VXWE85iDKT2Q))
            break;
        printf ("%d\n", D1zYOd0cy *(867 - 667));
        for (sQNB6FTqgmfc = (14 - 14); VXWE85iDKT2Q > sQNB6FTqgmfc; sQNB6FTqgmfc++)
            scanf ("%ld", &UhuJ28soKG6[sQNB6FTqgmfc]);
        for (sQNB6FTqgmfc = (802 - 802); sQNB6FTqgmfc < VXWE85iDKT2Q; sQNB6FTqgmfc++)
            scanf ("%ld", &UNTlSFpk8i[sQNB6FTqgmfc]);
        D1zYOd0cy = (733 - 733);
        qsort (UhuJ28soKG6, VXWE85iDKT2Q, sizeof (long ), cVZ4oHuW8);
        qsort (UNTlSFpk8i, VXWE85iDKT2Q, sizeof (long ), cVZ4oHuW8);
        yL0lqUnEJ = (548 - 548);
        for (sQNB6FTqgmfc = yL0lqUnEJ = VXWE85iDKT2Q -1, xtD6nc = u1YqrFSOH = (736 - 736); yL0lqUnEJ >= u1YqrFSOH && sQNB6FTqgmfc >= xtD6nc; yL0lqUnEJ--) {
            if (UNTlSFpk8i[yL0lqUnEJ] < UhuJ28soKG6[sQNB6FTqgmfc]) {
                D1zYOd0cy++;
                sQNB6FTqgmfc--;
            }
            else if (UhuJ28soKG6[sQNB6FTqgmfc] < UNTlSFpk8i[yL0lqUnEJ]) {
                xtD6nc++;
                D1zYOd0cy--;
            }
            else {
                if (UhuJ28soKG6[xtD6nc] > UNTlSFpk8i[u1YqrFSOH]) {
                    D1zYOd0cy++;
                    u1YqrFSOH++;
                    yL0lqUnEJ++;
                    xtD6nc++;
                }
                else if (UhuJ28soKG6[xtD6nc] < UNTlSFpk8i[u1YqrFSOH]) {
                    xtD6nc++;
                    D1zYOd0cy--;
                }
                else {
                    if (UhuJ28soKG6[xtD6nc] == UNTlSFpk8i[yL0lqUnEJ]) {
                        xtD6nc++;
                    }
                    else {
                        D1zYOd0cy--;
                        xtD6nc++;
                    }
                }
            }
        }
    }
    return (995 - 995);
}

