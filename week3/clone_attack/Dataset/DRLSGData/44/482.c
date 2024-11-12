void  main () {
    int Nkq5GnAT0;
    int JPnlQcDM [(902 - 896)];
    int CSNvkFa1xB [(619 - 613)] [(415 - 414)];
    int tq8jMuoPmUSc (int x, int n5hIdErV);
    {
        Nkq5GnAT0 = (572 - 176) - 396;
        for (; Nkq5GnAT0 <= (810 - 805);) {
            scanf ("%d", &CSNvkFa1xB[Nkq5GnAT0][(224 - 224)]);
            Nkq5GnAT0++;
        }
    }
    for (Nkq5GnAT0 = (517 - 517); (313 - 308) >= Nkq5GnAT0; Nkq5GnAT0 = Nkq5GnAT0 +(578 - 577))
        JPnlQcDM[Nkq5GnAT0] = tq8jMuoPmUSc (CSNvkFa1xB[Nkq5GnAT0][(564 - 564)], Nkq5GnAT0);
    {
        Nkq5GnAT0 = (1178 - 395) - (988 - 205);
        for (; (493 - 489) >= Nkq5GnAT0;) {
            printf ("%d\n", JPnlQcDM[Nkq5GnAT0]);
            Nkq5GnAT0++;
        }
    }
    printf ("%d", JPnlQcDM[(286 - 281)]);
}

int tq8jMuoPmUSc (int x, int n5hIdErV) {
    int tCxs98ngW;
    int ERtF1SrnE;
    int JPnlQcDM;
    int cYN2U0ky;
    int iQSDwAXdOqJ0 [(746 - 740)] [(763 - 663)];
    int xNtDqefyK;
    int GjfyhVgE7GzK;
    int BdY5GyF;
    ERtF1SrnE = (281 - 281);
    if (!((475 - 475) != x))
        ERtF1SrnE = (410 - 410);
    else if ((629 - 629) < x) {
        BdY5GyF = log10 (x);
        {
            tCxs98ngW = BdY5GyF;
            for (; (810 - 810) <= tCxs98ngW;) {
                GjfyhVgE7GzK = pow ((31 - 21), tCxs98ngW + (193 - 192));
                JPnlQcDM = pow ((484 - 474), tCxs98ngW);
                cYN2U0ky = x % GjfyhVgE7GzK -x % JPnlQcDM;
                xNtDqefyK = cYN2U0ky / JPnlQcDM;
                iQSDwAXdOqJ0[n5hIdErV][tCxs98ngW] = xNtDqefyK;
                tCxs98ngW--;
            }
        }
        {
            tCxs98ngW = (65 - 65);
            for (; tCxs98ngW <= BdY5GyF;) {
                ERtF1SrnE = ERtF1SrnE +iQSDwAXdOqJ0[n5hIdErV][tCxs98ngW] * pow ((104 - 94), BdY5GyF -tCxs98ngW);
                tCxs98ngW = tCxs98ngW + (791 - 790);
            }
        }
    }
    else if (x < (986 - 986)) {
        x = ((386 - 386) - x);
        BdY5GyF = log10 (x);
        {
            tCxs98ngW = BdY5GyF;
            for (; tCxs98ngW >= (723 - 723);) {
                GjfyhVgE7GzK = pow ((145 - 135), tCxs98ngW + (872 - 871));
                JPnlQcDM = pow ((52 - 42), tCxs98ngW);
                cYN2U0ky = x % GjfyhVgE7GzK -x % JPnlQcDM;
                xNtDqefyK = cYN2U0ky / JPnlQcDM;
                iQSDwAXdOqJ0[n5hIdErV][tCxs98ngW] = xNtDqefyK;
                tCxs98ngW--;
            }
        }
        {
            tCxs98ngW = 0;
            for (; tCxs98ngW <= BdY5GyF;) {
                ERtF1SrnE = ERtF1SrnE +iQSDwAXdOqJ0[n5hIdErV][tCxs98ngW] * pow ((230 - 220), BdY5GyF -tCxs98ngW);
                tCxs98ngW++;
            }
        }
        ERtF1SrnE = (0 - ERtF1SrnE);
    }
    return (ERtF1SrnE);
}

