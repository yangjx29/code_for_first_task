main () {
    int CIj3vw2sU7X;
    int sA3gjvnfD;
    int veVShwXmtbB;
    struct   lHEYUwmav {
        char xG5eYRSuaFZt [(369 - 362)];
        float jrK4FduNtk9;
    }
    lHEYUwmav [(670 - 630)];
    int XGuP0ecaiAj;
    float VKahroy [(861 - 821)] = {(619 - 619)};
    float TIyerEJbFVC [(416 - 376)] = {(251 - 251)};
    float cTEU0loDPedY;
    XGuP0ecaiAj = (508 - 508);
    scanf ("%d", &CIj3vw2sU7X);
    {
        veVShwXmtbB = (822 - 822);
        for (; CIj3vw2sU7X > veVShwXmtbB;) {
            scanf ("%s%f", lHEYUwmav[veVShwXmtbB].xG5eYRSuaFZt, &lHEYUwmav[veVShwXmtbB].jrK4FduNtk9);
            veVShwXmtbB = veVShwXmtbB + (580 - 579);
        }
    }
    {
        veVShwXmtbB = (486 - 486);
        for (; CIj3vw2sU7X > veVShwXmtbB;) {
            if (!((868 - 864) != strlen (lHEYUwmav[veVShwXmtbB].xG5eYRSuaFZt)))
                VKahroy[veVShwXmtbB] = lHEYUwmav[veVShwXmtbB].jrK4FduNtk9;
            else
                TIyerEJbFVC[veVShwXmtbB] = lHEYUwmav[veVShwXmtbB].jrK4FduNtk9;
            veVShwXmtbB = veVShwXmtbB + (364 - 363);
        }
    }
    {
        veVShwXmtbB = (929 - 929);
        for (; veVShwXmtbB < (348 - 308);) {
            {
                sA3gjvnfD = (767 - 727) - (378 - 377);
                for (; veVShwXmtbB < sA3gjvnfD;) {
                    if (VKahroy[veVShwXmtbB] > VKahroy[sA3gjvnfD]) {
                        cTEU0loDPedY = VKahroy[veVShwXmtbB];
                        VKahroy[veVShwXmtbB] = VKahroy[sA3gjvnfD];
                        VKahroy[sA3gjvnfD] = cTEU0loDPedY;
                    }
                    sA3gjvnfD = sA3gjvnfD - (11 - 10);
                }
            }
            veVShwXmtbB = veVShwXmtbB + 1;
        }
    }
    {
        veVShwXmtbB = (323 - 323);
        for (; veVShwXmtbB < (640 - 600);) {
            {
                sA3gjvnfD = (137 - 97) - (917 - 916);
                for (; sA3gjvnfD > veVShwXmtbB;) {
                    if (TIyerEJbFVC[sA3gjvnfD] > TIyerEJbFVC[veVShwXmtbB]) {
                        cTEU0loDPedY = TIyerEJbFVC[veVShwXmtbB];
                        TIyerEJbFVC[veVShwXmtbB] = TIyerEJbFVC[sA3gjvnfD];
                        TIyerEJbFVC[sA3gjvnfD] = cTEU0loDPedY;
                    }
                    sA3gjvnfD = sA3gjvnfD - 1;
                }
            }
            veVShwXmtbB = veVShwXmtbB + 1;
        }
    }
    veVShwXmtbB = (425 - 425);
    do {
        veVShwXmtbB = veVShwXmtbB + 1;
    }
    while (!((941 - 941) != VKahroy[veVShwXmtbB]));
    printf ("%.2f", VKahroy[veVShwXmtbB]);
    XGuP0ecaiAj = veVShwXmtbB;
    {
        veVShwXmtbB = XGuP0ecaiAj +(555 - 554);
        for (; veVShwXmtbB < (291 - 251);) {
            printf (" %.2f", VKahroy[veVShwXmtbB]);
            veVShwXmtbB = veVShwXmtbB + 1;
        }
    }
    veVShwXmtbB = (121 - 121);
    for (; TIyerEJbFVC[veVShwXmtbB] != (652 - 652);) {
        printf (" %.2f", TIyerEJbFVC[veVShwXmtbB]);
        veVShwXmtbB = veVShwXmtbB + 1;
    }
}

