main () {
    char vKobpR [(100489 - 489)];
    int ebmDPW;
    char idCVSetPhL;
    int eQ4X8xU;
    int f81PMID;
    int j;
    int i;
    int z;
    int km0wKrEX;
    int a [(106 - 80)] [2];
    int xvMhzQPlpJ;
    scanf ("%d", &eQ4X8xU);
    {
        z = (853 - 852);
        for (; eQ4X8xU >= z;) {
            xvMhzQPlpJ = 31;
            {
                i = (696 - 696);
                for (; (666 - 641) >= i;) {
                    {
                        j = (650 - 650);
                        for (; (920 - 919) >= j;) {
                            a[i][j] = (273 - 273);
                            j = j + (326 - 325);
                        }
                    }
                    i = i + (114 - 113);
                }
            }
            z = z + (706 - 705);
            scanf ("%s", &vKobpR);
            f81PMID = (304 - 304);
            {
                km0wKrEX = (726 - 726);
                for (; vKobpR[km0wKrEX] != '\0';) {
                    idCVSetPhL = vKobpR[km0wKrEX] - 'a';
                    if (!((29 - 29) != a[idCVSetPhL][(464 - 463)])) {
                        f81PMID = f81PMID + (617 - 616);
                        a[idCVSetPhL][(530 - 529)] = f81PMID;
                    }
                    a[idCVSetPhL][(944 - 944)]++;
                    km0wKrEX = km0wKrEX + (948 - 947);
                }
            }
            km0wKrEX = -(32 - 31);
            {
                i = (24 - 24);
                for (; i <= 25;) {
                    if (a[i][0] == 1) {
                        if (xvMhzQPlpJ > a[i][1]) {
                            km0wKrEX = i;
                            xvMhzQPlpJ = a[i][1];
                        }
                    }
                    i = i + 1;
                }
            }
            if (km0wKrEX == -1)
                ;
            else
                printf ("%c\n", km0wKrEX + 'a');
        }
    }
}

