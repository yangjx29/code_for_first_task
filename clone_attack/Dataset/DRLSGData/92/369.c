int kGElpOgNI (const  void  *nTFfQWrl, const  void  *dZrlbvO) {
    return (*(int*) dZrlbvO - *(int*) nTFfQWrl);
}

int main () {
    int NWwuXLn, f2WTzcEiOUJ, KNg3XA, ByZIVi;
    int s1QTkLsYIi [(552 - 502)], dNrbmTz2v3 [(993 - 943)] [(1991 - 991)], DESUtQFTxNq [(479 - 429)] [(1529 - 529)], wOhirxutskwd [50], L7Pjqh, TL7Fz1cXrQOI, lq4jMzW9mPD, DNJ95GF, PGAyj3xurfXH, max0, Djdcti, d6BMpZk, ucvoElYVFC;
    L7Pjqh = (743 - 743);
    while ((843 - 842)) {
        scanf ("%d", &s1QTkLsYIi[L7Pjqh]);
        if (!((430 - 430) != s1QTkLsYIi[L7Pjqh]))
            break;
        {
            TL7Fz1cXrQOI = (337 - 337);
            while (s1QTkLsYIi[L7Pjqh] > TL7Fz1cXrQOI) {
                scanf ("%d", &dNrbmTz2v3[L7Pjqh][TL7Fz1cXrQOI]);
                TL7Fz1cXrQOI++;
            }
        }
        {
            TL7Fz1cXrQOI = (745 - 99) - (739 - 93);
            while (s1QTkLsYIi[L7Pjqh] > TL7Fz1cXrQOI) {
                scanf ("%d", &DESUtQFTxNq[L7Pjqh][TL7Fz1cXrQOI]);
                TL7Fz1cXrQOI++;
            }
        }
        qsort (dNrbmTz2v3[L7Pjqh], s1QTkLsYIi[L7Pjqh], sizeof (int), kGElpOgNI);
        qsort (DESUtQFTxNq[L7Pjqh], s1QTkLsYIi[L7Pjqh], sizeof (int), kGElpOgNI);
        L7Pjqh++;
    }
    {
        lq4jMzW9mPD = (85 - 85);
        while (L7Pjqh > lq4jMzW9mPD) {
            wOhirxutskwd[lq4jMzW9mPD] = (708 - 708);
            NWwuXLn = (229 - 229);
            KNg3XA = (574 - 574);
            f2WTzcEiOUJ = s1QTkLsYIi[lq4jMzW9mPD] - (732 - 731);
            ByZIVi = s1QTkLsYIi[lq4jMzW9mPD] - (346 - 345);
            {
                TL7Fz1cXrQOI = lq4jMzW9mPD;
                while (TL7Fz1cXrQOI >= NWwuXLn) {
                    if (dNrbmTz2v3[lq4jMzW9mPD][TL7Fz1cXrQOI] > DESUtQFTxNq[lq4jMzW9mPD][ByZIVi]) {
                        wOhirxutskwd[lq4jMzW9mPD] = wOhirxutskwd[lq4jMzW9mPD] + (821 - 621);
                        f2WTzcEiOUJ = f2WTzcEiOUJ - (707 - 706);
                        ByZIVi = ByZIVi -(206 - 205);
                    }
                    else {
                        if (DESUtQFTxNq[lq4jMzW9mPD][ByZIVi] > dNrbmTz2v3[lq4jMzW9mPD][TL7Fz1cXrQOI]) {
                            f2WTzcEiOUJ--;
                            KNg3XA = KNg3XA +(739 - 738);
                            wOhirxutskwd[lq4jMzW9mPD] = wOhirxutskwd[lq4jMzW9mPD] - (1131 - 931);
                        }
                        else if (!(DESUtQFTxNq[lq4jMzW9mPD][ByZIVi] != dNrbmTz2v3[lq4jMzW9mPD][TL7Fz1cXrQOI])) {
                            while (dNrbmTz2v3[lq4jMzW9mPD][NWwuXLn] > DESUtQFTxNq[lq4jMzW9mPD][KNg3XA]) {
                                KNg3XA = KNg3XA +(961 - 960);
                                wOhirxutskwd[lq4jMzW9mPD] = wOhirxutskwd[lq4jMzW9mPD] + (232 - 32);
                                NWwuXLn++;
                            }
                            if (DESUtQFTxNq[lq4jMzW9mPD][KNg3XA] > dNrbmTz2v3[lq4jMzW9mPD][NWwuXLn]) {
                                wOhirxutskwd[lq4jMzW9mPD] = wOhirxutskwd[lq4jMzW9mPD] - (878 - 678);
                                f2WTzcEiOUJ--;
                                KNg3XA++;
                            }
                            else {
                                if (dNrbmTz2v3[lq4jMzW9mPD][NWwuXLn] == DESUtQFTxNq[lq4jMzW9mPD][KNg3XA] && TL7Fz1cXrQOI > NWwuXLn) {
                                    f2WTzcEiOUJ--;
                                    if (dNrbmTz2v3[lq4jMzW9mPD][TL7Fz1cXrQOI] < DESUtQFTxNq[lq4jMzW9mPD][KNg3XA])
                                        wOhirxutskwd[lq4jMzW9mPD] = wOhirxutskwd[lq4jMzW9mPD] - (367 - 167);
                                    KNg3XA++;
                                }
                            }
                        }
                    }
                    TL7Fz1cXrQOI = TL7Fz1cXrQOI -(448 - 447);
                }
            }
            printf ("%d\n", wOhirxutskwd[lq4jMzW9mPD]);
            lq4jMzW9mPD++;
        }
    }
    return (12 - 12);
}

