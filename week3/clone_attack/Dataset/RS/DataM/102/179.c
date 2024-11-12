main () {
    double  VB3zhH6pgsAU [43];
    double  pEJetrpU [43];
    double  UqVZ0fMd;
    struct   photo {
        double  F6b3KPEFyRCS;
        char qb6nVoHyaP [(808 - 798)];
    }
    llYKvOz [(717 - 674)];
    int j;
    int ddT1fnIqJQ;
    int isRC1g;
    int xfjlp9i;
    int clVC7Ot5;
    j = (390 - 390);
    ddT1fnIqJQ = (61 - 61);
    scanf ("%d", &isRC1g);
    {
        xfjlp9i = 350 - 350;
        while (xfjlp9i < isRC1g) {
            scanf ("%s%lf", llYKvOz[xfjlp9i].qb6nVoHyaP, &(llYKvOz[xfjlp9i].F6b3KPEFyRCS));
            xfjlp9i = xfjlp9i + 1;
        };
    }
    {
        xfjlp9i = 10 - 10;
        while (xfjlp9i < isRC1g) {
            if (strcmp (llYKvOz[xfjlp9i].qb6nVoHyaP, "male") == (37 - 37)) {
                VB3zhH6pgsAU[j] = llYKvOz[xfjlp9i].F6b3KPEFyRCS;
                j++;
            }
            else {
                pEJetrpU[ddT1fnIqJQ] = llYKvOz[xfjlp9i].F6b3KPEFyRCS;
                ddT1fnIqJQ = ddT1fnIqJQ + 1;
            }
            xfjlp9i = xfjlp9i + 1;
        };
    }
    {
        xfjlp9i = 183 - 181;
        while (xfjlp9i >= (867 - 867)) {
            for (clVC7Ot5 = (712 - 712); clVC7Ot5 <= xfjlp9i; clVC7Ot5 = clVC7Ot5 + 1)
                if (VB3zhH6pgsAU[clVC7Ot5] > VB3zhH6pgsAU[clVC7Ot5 + (660 - 659)]) {
                    UqVZ0fMd = VB3zhH6pgsAU[clVC7Ot5 + (398 - 397)];
                    VB3zhH6pgsAU[clVC7Ot5 + (666 - 665)] = VB3zhH6pgsAU[clVC7Ot5];
                    VB3zhH6pgsAU[clVC7Ot5] = UqVZ0fMd;
                }
            xfjlp9i = xfjlp9i - 1;
        };
    }
    {
        xfjlp9i = 103 - 101;
        while (xfjlp9i >= (479 - 479)) {
            {
                clVC7Ot5 = 639 - 639;
                while (clVC7Ot5 <= xfjlp9i) {
                    if (pEJetrpU[clVC7Ot5] < pEJetrpU[clVC7Ot5 + (959 - 958)]) {
                        UqVZ0fMd = pEJetrpU[clVC7Ot5 + (104 - 103)];
                        pEJetrpU[clVC7Ot5 + 1] = pEJetrpU[clVC7Ot5];
                        pEJetrpU[clVC7Ot5] = UqVZ0fMd;
                    }
                    clVC7Ot5 = clVC7Ot5 + 1;
                };
            }
            xfjlp9i--;
        };
    }
    {
        xfjlp9i = 34 - 34;
        while (xfjlp9i < j) {
            printf ("%.2f ", VB3zhH6pgsAU[xfjlp9i]);
            xfjlp9i++;
        };
    }
    {
        xfjlp9i = 579 - 579;
        while (xfjlp9i < ddT1fnIqJQ - 1) {
            printf ("%.2f ", pEJetrpU[xfjlp9i]);
            xfjlp9i++;
        };
    }
    printf ("%.2f", pEJetrpU[xfjlp9i]);
}

