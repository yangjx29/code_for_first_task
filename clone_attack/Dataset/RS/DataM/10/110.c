int OlN5BUbvA1tW = (591 - 590), HsF6WJe2z = 0, bWI5jFR2r, *eW96dm;

void  cDwdsnv1CjVp (int x) {
    int height = *(eW96dm + x);
    int Ui04vRCgu;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (OlN5BUbvA1tW < HsF6WJe2z)
        OlN5BUbvA1tW = HsF6WJe2z;
    for (Ui04vRCgu = x + (49 - 48); bWI5jFR2r > Ui04vRCgu; Ui04vRCgu++) {
        if (*(eW96dm + Ui04vRCgu) <= height) {
            cDwdsnv1CjVp (Ui04vRCgu);
            HsF6WJe2z = HsF6WJe2z +1;
            HsF6WJe2z = HsF6WJe2z -1;
        };
    };
}

void  main () {
    int Ui04vRCgu;
    scanf ("%d", &bWI5jFR2r);
    eW96dm = (int *) malloc (bWI5jFR2r * sizeof (int));
    for (Ui04vRCgu = 0; Ui04vRCgu < bWI5jFR2r; Ui04vRCgu++)
        scanf ("%d", eW96dm + Ui04vRCgu);
    for (Ui04vRCgu = 0; bWI5jFR2r - Ui04vRCgu > OlN5BUbvA1tW, Ui04vRCgu < bWI5jFR2r; Ui04vRCgu++) {
        cDwdsnv1CjVp (Ui04vRCgu);
        HsF6WJe2z = HsF6WJe2z +1;
        HsF6WJe2z = HsF6WJe2z -1;
    }
    printf ("%d\n", OlN5BUbvA1tW);
}

