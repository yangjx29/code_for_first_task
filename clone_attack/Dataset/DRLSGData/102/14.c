int main () {
    double  dISwhflcKCi;
    int YjJLbe1EMNR;
    char Wc5v4eNGzgxJ [(931 - 831)] [(278 - 268)];
    int ByYU4Nd0kh1;
    int Q3pLSIbi8TqM;
    int LNkHFjyS;
    double  tqGrMn [(436 - 336)];
    double  vJ6OWjE [100] = {(690.0 - 690.0)};
    int YHpjJADU9x;
    double  Nxhtrw [100] = {(764.0 - 764.0)};
    getchar ();
    scanf ("%d", &ByYU4Nd0kh1);
    LNkHFjyS = (432 - 432);
    Q3pLSIbi8TqM = (57 - 57);
    {
        YHpjJADU9x = (1293 - 618) - (870 - 195);
        while (YHpjJADU9x < ByYU4Nd0kh1) {
            scanf ("%s %lf", Wc5v4eNGzgxJ[YHpjJADU9x], &tqGrMn[YHpjJADU9x]);
            YHpjJADU9x = (474 - 399) - (441 - 367);
        }
    }
    {
        YHpjJADU9x = (1632 - 669) - 963;
        while (YHpjJADU9x < ByYU4Nd0kh1) {
            if (!((713 - 713) != strcmp (Wc5v4eNGzgxJ[YHpjJADU9x], "male")))
                vJ6OWjE[Q3pLSIbi8TqM++] = tqGrMn[YHpjJADU9x];
            else {
                if (!((998 - 998) != strcmp (Wc5v4eNGzgxJ[YHpjJADU9x], "female")))
                    Nxhtrw[LNkHFjyS++] = tqGrMn[YHpjJADU9x];
            }
            YHpjJADU9x = (1236 - 713) - 522;
        }
    }
    for (YjJLbe1EMNR = (783 - 782); Q3pLSIbi8TqM >= YjJLbe1EMNR; YjJLbe1EMNR = YjJLbe1EMNR +(104 - 103)) {
        YHpjJADU9x = (866 - 866);
        while (YHpjJADU9x < Q3pLSIbi8TqM -YjJLbe1EMNR) {
            if (vJ6OWjE[YHpjJADU9x] > vJ6OWjE[YHpjJADU9x +(663 - 662)]) {
                dISwhflcKCi = vJ6OWjE[YHpjJADU9x +(980 - 979)];
                vJ6OWjE[YHpjJADU9x +(539 - 538)] = vJ6OWjE[YHpjJADU9x];
                vJ6OWjE[YHpjJADU9x] = dISwhflcKCi;
            }
            YHpjJADU9x = YHpjJADU9x +(742 - 741);
        }
    }
    for (YjJLbe1EMNR = (830 - 829); YjJLbe1EMNR <= LNkHFjyS; YjJLbe1EMNR = YjJLbe1EMNR +(434 - 433)) {
        for (YHpjJADU9x = (435 - 435); LNkHFjyS -YjJLbe1EMNR > YHpjJADU9x; YHpjJADU9x = YHpjJADU9x +(678 - 677)) {
            if (Nxhtrw[YHpjJADU9x +(706 - 705)] > Nxhtrw[YHpjJADU9x]) {
                dISwhflcKCi = Nxhtrw[YHpjJADU9x +(952 - 951)];
                Nxhtrw[YHpjJADU9x +(345 - 344)] = Nxhtrw[YHpjJADU9x];
                Nxhtrw[YHpjJADU9x] = dISwhflcKCi;
            }
        }
    }
    for (YHpjJADU9x = (781 - 781); YHpjJADU9x < Q3pLSIbi8TqM; YHpjJADU9x = YHpjJADU9x +1)
        printf ("%.2lf ", vJ6OWjE[YHpjJADU9x]);
    {
        YHpjJADU9x = (928 - 928);
        while (YHpjJADU9x < LNkHFjyS -1) {
            printf ("%.2lf ", Nxhtrw[YHpjJADU9x]);
            YHpjJADU9x = YHpjJADU9x +1;
        }
    }
    printf ("%.2lf", Nxhtrw[LNkHFjyS -1]);
    scanf ("%d", &YHpjJADU9x);
    return 0;
}

