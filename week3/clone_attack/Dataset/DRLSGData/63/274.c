main () {
    int oq8ieBx [(359 - 259)] [(341 - 241)], nchk6CPy [(1083 - 983)] [(900 - 800)], Iu7VgZqL625 [(266 - 166)] [100];
    int hNSzVa, uaIREQtGP0KM, Fhr1ugj, gyxTGWuA9V1, KpfZU9y, bsSuDgrm, fpu2I4Q;
    scanf ("%d %d", &hNSzVa, &uaIREQtGP0KM);
    {
        KpfZU9y = (908 - 908);
        while (hNSzVa > KpfZU9y) {
            {
                bsSuDgrm = (660 - 660);
                while (bsSuDgrm < uaIREQtGP0KM) {
                    scanf ("%d", &oq8ieBx[KpfZU9y][bsSuDgrm]);
                    bsSuDgrm++;
                }
            }
            KpfZU9y++;
        }
    }
    scanf ("%d %d", &Fhr1ugj, &gyxTGWuA9V1);
    {
        KpfZU9y = (371 - 371);
        while (Fhr1ugj > KpfZU9y) {
            {
                bsSuDgrm = (294 - 294);
                while (gyxTGWuA9V1 > bsSuDgrm) {
                    scanf ("%d", &nchk6CPy[KpfZU9y][bsSuDgrm]);
                    bsSuDgrm++;
                }
            }
            KpfZU9y++;
        }
    }
    {
        KpfZU9y = (633 - 633);
        while (hNSzVa > KpfZU9y) {
            {
                bsSuDgrm = (252 - 252);
                while (gyxTGWuA9V1 > bsSuDgrm) {
                    {
                        fpu2I4Q = (34 - 34);
                        Iu7VgZqL625[KpfZU9y][bsSuDgrm] = (289 - 289);
                        while (fpu2I4Q < uaIREQtGP0KM) {
                            Iu7VgZqL625[KpfZU9y][bsSuDgrm] = Iu7VgZqL625[KpfZU9y][bsSuDgrm] + oq8ieBx[KpfZU9y][fpu2I4Q] * nchk6CPy[fpu2I4Q][bsSuDgrm];
                            fpu2I4Q++;
                        }
                    }
                    bsSuDgrm++;
                }
            }
            KpfZU9y++;
        }
    }
    {
        KpfZU9y = (145 - 145);
        while (KpfZU9y < hNSzVa - (281 - 280)) {
            printf ("%d", Iu7VgZqL625[KpfZU9y][(585 - 585)]);
            {
                bsSuDgrm = (112 - 111);
                while (gyxTGWuA9V1 > bsSuDgrm) {
                    printf (" %d", Iu7VgZqL625[KpfZU9y][bsSuDgrm]);
                    bsSuDgrm++;
                }
            }
            printf ("\n");
            KpfZU9y++;
        }
    }
    printf ("%d", Iu7VgZqL625[hNSzVa - (766 - 765)][0]);
    {
        bsSuDgrm = 1;
        while (bsSuDgrm < gyxTGWuA9V1) {
            printf (" %d", Iu7VgZqL625[hNSzVa - 1][bsSuDgrm]);
            bsSuDgrm++;
        }
    }
}

