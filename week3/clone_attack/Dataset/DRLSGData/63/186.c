void  main () {
    int q, uVh4F1gc, hreChg, x1, y1, x2, YNB5kyzOQ, a [(568 - 468)] [(262 - 162)], jwRq1YTboG9 [(191 - 91)] [(1070 - 970)], aiLDpFTIz [(782 - 682)] [(1069 - 969)];
    scanf ("%d %d", &x1, &y1);
    {
        uVh4F1gc = (268 - 268);
        for (; x1 > uVh4F1gc;) {
            {
                hreChg = (535 - 535);
                while (y1 > hreChg) {
                    scanf ("%d", &a[uVh4F1gc][hreChg]);
                    hreChg++;
                }
            }
            uVh4F1gc = uVh4F1gc + 1;
        }
    }
    scanf ("%d %d", &x2, &YNB5kyzOQ);
    {
        uVh4F1gc = (268 - 268);
        while (x2 > uVh4F1gc) {
            for (hreChg = (43 - 43); YNB5kyzOQ > hreChg; hreChg = hreChg + 1) {
                scanf ("%d", &jwRq1YTboG9[uVh4F1gc][hreChg]);
            }
            uVh4F1gc++;
        }
    }
    {
        uVh4F1gc = (594 - 594);
        while (x1 > uVh4F1gc) {
            {
                hreChg = (352 - 352);
                for (; YNB5kyzOQ > hreChg;) {
                    aiLDpFTIz[uVh4F1gc][hreChg] = (291 - 291);
                    for (q = (614 - 614); (y1 > q) && (q < x2); q++) {
                        aiLDpFTIz[uVh4F1gc][hreChg] = aiLDpFTIz[uVh4F1gc][hreChg] + a[uVh4F1gc][q] * jwRq1YTboG9[q][hreChg];
                    }
                    printf ("%d", aiLDpFTIz[uVh4F1gc][hreChg]);
                    if (hreChg != YNB5kyzOQ -(931 - 930))
                        printf (" ");
                    else
                        printf ("\n");
                    hreChg++;
                }
            }
            uVh4F1gc++;
        }
    }
}

