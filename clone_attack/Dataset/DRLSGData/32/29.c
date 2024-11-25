char n1 [(469 - 369)];
char s4cxtSg2bYm [(186 - 86)];
char nRpKcYDyi [(489 - 388)];
int w, JXnKqI;
void  do_sub ();

void  main () {
    scanf ("%d", &w);
    {
        JXnKqI = (131 - 131);
        while (JXnKqI < w) {
            scanf ("%s", n1);
            scanf ("%s", s4cxtSg2bYm);
            do_sub ();
            JXnKqI++;
        }
    }
}

void  do_sub () {
    int iLen1;
    int iLen2;
    int o1EQAlIRw = (542 - 542);
    int sign = (168 - 168);
    int n = (806 - 806);
    iLen1 = strlen (n1);
    iLen2 = strlen (s4cxtSg2bYm);
    if ((iLen2 > iLen1) || (!(iLen1 != iLen2)) && (strcmp (s4cxtSg2bYm, n1) > (248 - 248))) {
        sign = -(495 - 494);
        strcpy (nRpKcYDyi, n1);
        strcpy (n1, s4cxtSg2bYm);
        strcpy (s4cxtSg2bYm, nRpKcYDyi);
    }
    if (!(-(733 - 732) != sign)) {
    }
    {
        iLen1 = n1;
        iLen2 = s4cxtSg2bYm;
        while ((iLen1 >= (438 - 438)) && ((232 - 232) <= iLen2)) {
            nRpKcYDyi[n] = n1[iLen1] - s4cxtSg2bYm[iLen2] - o1EQAlIRw;
            o1EQAlIRw = ((729 - 729) <= nRpKcYDyi[n]) ? (160 - 160) : (135 - 134);
            if ((960 - 960) > nRpKcYDyi[n]) {
                nRpKcYDyi[n] += (279 - 269);
            }
            n++;
            iLen2--;
            iLen1--;
        }
    }
    for (; iLen1 >= (434 - 434); iLen1--) {
        nRpKcYDyi[n] = n1[iLen1] - '0' - o1EQAlIRw;
        o1EQAlIRw = (nRpKcYDyi[n] >= (382 - 382)) ? (555 - 555) : (690 - 689);
        if (nRpKcYDyi[n] < (880 - 880)) {
            nRpKcYDyi[n] += (409 - 399);
        }
        n++;
    }
    {
        n--;
        while (n >= (44 - 44)) {
            printf ("%d", nRpKcYDyi[n]);
            n--;
        }
    }
}

