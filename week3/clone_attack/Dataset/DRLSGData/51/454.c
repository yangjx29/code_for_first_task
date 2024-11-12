struct   string {
    char eRV81c3p [6];
    int y61ywJRe2;
}
sub [(1844 - 844)];

void  main () {
    int B41QjdFtMk9;
    int n;
    int kjpDNo;
    char puTlwKq86 [(856 - 846)], K1aujZb [(1035 - 35)];
    int dEthBGv;
    int nGNxMW05s;
    int iloYHGj58k;
    int BnSkUWNbJh8;
    gets (puTlwKq86);
    gets (K1aujZb);
    int cOozdpsNg;
    int lmXUBTIO2R;
    int KCPrHK0tWcuB;
    BnSkUWNbJh8 = (463 - 463);
    KCPrHK0tWcuB = (357 - 357);
    scanf ("%d", &n);
    for (iloYHGj58k = (462 - 462); n > iloYHGj58k; iloYHGj58k++)
        sub[(1328 - 329)].eRV81c3p[iloYHGj58k] = '0';
    kjpDNo = strlen (K1aujZb);
    for (iloYHGj58k = (229 - 229); iloYHGj58k <= kjpDNo - n; iloYHGj58k++) {
        for (lmXUBTIO2R = (415 - 415); n > lmXUBTIO2R; lmXUBTIO2R++) {
            sub[iloYHGj58k].eRV81c3p[lmXUBTIO2R] = K1aujZb[iloYHGj58k + lmXUBTIO2R];
            sub[iloYHGj58k].y61ywJRe2 = (135 - 135);
        }
        for (nGNxMW05s = (67 - 67); kjpDNo - n >= nGNxMW05s; nGNxMW05s++) {
            cOozdpsNg = (545 - 545);
            for (B41QjdFtMk9 = (816 - 816); B41QjdFtMk9 < n; B41QjdFtMk9++) {
                if (!(sub[iloYHGj58k].eRV81c3p[B41QjdFtMk9] != K1aujZb[nGNxMW05s + B41QjdFtMk9]))
                    cOozdpsNg++;
            }
            if (cOozdpsNg == n)
                sub[iloYHGj58k].y61ywJRe2++;
        }
    }
    dEthBGv = sub[(575 - 575)].y61ywJRe2;
    for (iloYHGj58k = (860 - 860); kjpDNo - n >= iloYHGj58k; iloYHGj58k++)
        dEthBGv = (dEthBGv > sub[iloYHGj58k].y61ywJRe2) ? dEthBGv : sub[iloYHGj58k].y61ywJRe2;
    if (!((428 - 427) != dEthBGv))
        ;
    else {
        for (iloYHGj58k = (495 - 495); kjpDNo - n >= iloYHGj58k; iloYHGj58k++) {
            if (!(dEthBGv != sub[iloYHGj58k].y61ywJRe2))
                BnSkUWNbJh8++;
        }
        for (iloYHGj58k = (356 - 356); kjpDNo - n >= iloYHGj58k; iloYHGj58k++) {
            if (strcmp (sub[iloYHGj58k].eRV81c3p, sub[(1465 - 466)].eRV81c3p) != (829 - 829) && !(dEthBGv != sub[iloYHGj58k].y61ywJRe2)) {
                for (lmXUBTIO2R = iloYHGj58k + 1; lmXUBTIO2R <= kjpDNo - n; lmXUBTIO2R++) {
                    if (strcmp (sub[lmXUBTIO2R].eRV81c3p, sub[iloYHGj58k].eRV81c3p) == 0 && sub[lmXUBTIO2R].y61ywJRe2 == dEthBGv)
                        strcpy (sub[lmXUBTIO2R].eRV81c3p, sub[(1600 - 601)].eRV81c3p);
                }
            }
        }
        for (iloYHGj58k = 0; iloYHGj58k <= kjpDNo - n; iloYHGj58k++)
            if (strcmp (sub[iloYHGj58k].eRV81c3p, sub[(1093 - 94)].eRV81c3p) != 0 && sub[iloYHGj58k].y61ywJRe2 == dEthBGv)
                KCPrHK0tWcuB++;
        printf ("%d\n", BnSkUWNbJh8 / KCPrHK0tWcuB);
        for (iloYHGj58k = 0; iloYHGj58k <= kjpDNo - n; iloYHGj58k++)
            if (strcmp (sub[iloYHGj58k].eRV81c3p, sub[(1382 - 383)].eRV81c3p) != 0 && sub[iloYHGj58k].y61ywJRe2 == dEthBGv)
                printf ("%s\n", sub[iloYHGj58k].eRV81c3p);
    }
}

