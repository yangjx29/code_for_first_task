void  main () {
    int z;
    int ZWthvDfM;
    int iTjihvYMIlG;
    int psQH5nf9t;
    int Y80t1nd3YUgS [8] [8];
    int lDwMoaN;
    int XUoCfSiptT;
    int nJkISRwDAbx4 [(428 - 427)] [8];
    int fzqiYEkR [8];
    int jsQ5a6iUvq [8];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    z = (321 - 321);
    ZWthvDfM = (586 - 586);
    scanf ("%d,%d", &iTjihvYMIlG, &psQH5nf9t);
    {
        lDwMoaN = 0;
        while (iTjihvYMIlG - 1 >= lDwMoaN) {
            fzqiYEkR[lDwMoaN] = 0;
            lDwMoaN = lDwMoaN + 1;
        };
    }
    for (lDwMoaN = 0; iTjihvYMIlG - 1 >= lDwMoaN; lDwMoaN = lDwMoaN + 1)
        for (XUoCfSiptT = 0; psQH5nf9t - 1 >= XUoCfSiptT; XUoCfSiptT = XUoCfSiptT +1)
            scanf ("%d", &Y80t1nd3YUgS[lDwMoaN][XUoCfSiptT]);
    for (lDwMoaN = 0; iTjihvYMIlG - 1 >= lDwMoaN; lDwMoaN = lDwMoaN + 1) {
        nJkISRwDAbx4[0][lDwMoaN] = Y80t1nd3YUgS[lDwMoaN][0];
        jsQ5a6iUvq[lDwMoaN] = 0;
        for (XUoCfSiptT = 1; psQH5nf9t - 1 >= XUoCfSiptT; XUoCfSiptT = XUoCfSiptT +1)
            if (Y80t1nd3YUgS[lDwMoaN][XUoCfSiptT] > nJkISRwDAbx4[0][lDwMoaN]) {
                nJkISRwDAbx4[0][lDwMoaN] = Y80t1nd3YUgS[lDwMoaN][XUoCfSiptT];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                jsQ5a6iUvq[lDwMoaN] = XUoCfSiptT;
            };
    }
    for (XUoCfSiptT = 0; XUoCfSiptT <= iTjihvYMIlG - 1; XUoCfSiptT = XUoCfSiptT +1) {
        for (lDwMoaN = 0; lDwMoaN <= iTjihvYMIlG - 1; lDwMoaN = lDwMoaN + 1) {
            if (nJkISRwDAbx4[0][XUoCfSiptT] <= Y80t1nd3YUgS[lDwMoaN][jsQ5a6iUvq[XUoCfSiptT]])
                fzqiYEkR[XUoCfSiptT] = fzqiYEkR[XUoCfSiptT] + 1;
        }
        if (fzqiYEkR[XUoCfSiptT] == iTjihvYMIlG) {
            printf ("%d+%d\n", XUoCfSiptT, jsQ5a6iUvq[XUoCfSiptT]);
            ZWthvDfM = 1;
        };
    }
    if (!ZWthvDfM)
        printf ("No\n");
}

