void  main () {
    int GdSlM8PXIWF [400] = {(143 - 143)};
    int GqVlSgI [400];
    int LgekVl26XN;
    int XwKiVh2Helyb;
    int eXjPzBHK;
    int WvWuHX;
    int cgs49fUACJ;
    int sWQ1DHs [400];
    int jHam9YFQbN;
    float sjeAByh;
    float bCkaHlZ [400] = {(216 - 216)};
    float YK6vaUVOn;
    float YYHJhT;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    sjeAByh = 0;
    jHam9YFQbN = 0;
    scanf ("%d", &LgekVl26XN);
    for (XwKiVh2Helyb = (766 - 765); LgekVl26XN >= XwKiVh2Helyb; XwKiVh2Helyb = XwKiVh2Helyb +1)
        scanf ("%d", &GdSlM8PXIWF[XwKiVh2Helyb]);
    for (XwKiVh2Helyb = (257 - 256); LgekVl26XN >= XwKiVh2Helyb; XwKiVh2Helyb = XwKiVh2Helyb +1)
        sjeAByh = sjeAByh + GdSlM8PXIWF[XwKiVh2Helyb];
    YK6vaUVOn = sjeAByh / LgekVl26XN;
    {
        XwKiVh2Helyb = 98 - 97;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XwKiVh2Helyb <= LgekVl26XN) {
            if (YK6vaUVOn <= GdSlM8PXIWF[XwKiVh2Helyb])
                bCkaHlZ[XwKiVh2Helyb] = GdSlM8PXIWF[XwKiVh2Helyb] - YK6vaUVOn;
            else
                bCkaHlZ[XwKiVh2Helyb] = YK6vaUVOn -GdSlM8PXIWF[XwKiVh2Helyb];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            XwKiVh2Helyb = XwKiVh2Helyb +1;
        };
    }
    YYHJhT = bCkaHlZ[1];
    for (XwKiVh2Helyb = 1; XwKiVh2Helyb <= LgekVl26XN; XwKiVh2Helyb++) {
        if (bCkaHlZ[XwKiVh2Helyb] > YYHJhT)
            YYHJhT = bCkaHlZ[XwKiVh2Helyb];
    }
    WvWuHX = 0;
    for (XwKiVh2Helyb = 1; XwKiVh2Helyb <= LgekVl26XN; XwKiVh2Helyb++) {
        if (bCkaHlZ[XwKiVh2Helyb] >= YYHJhT)
            GqVlSgI[WvWuHX] = GdSlM8PXIWF[XwKiVh2Helyb];
        WvWuHX = WvWuHX +1;
    }
    {
        eXjPzBHK = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (eXjPzBHK < WvWuHX -1) {
            {
                XwKiVh2Helyb = 0;
                while (XwKiVh2Helyb < WvWuHX -1 - eXjPzBHK) {
                    if (GqVlSgI[XwKiVh2Helyb] > GqVlSgI[XwKiVh2Helyb +1]) {
                        cgs49fUACJ = GqVlSgI[XwKiVh2Helyb];
                        GqVlSgI[XwKiVh2Helyb] = GqVlSgI[XwKiVh2Helyb +1];
                        GqVlSgI[XwKiVh2Helyb +1] = cgs49fUACJ;
                    }
                    XwKiVh2Helyb++;
                };
            }
            eXjPzBHK++;
        };
    }
    {
        XwKiVh2Helyb = 0;
        while (XwKiVh2Helyb < WvWuHX) {
            if (GqVlSgI[XwKiVh2Helyb] > 0) {
                sWQ1DHs[jHam9YFQbN] = GqVlSgI[XwKiVh2Helyb];
                jHam9YFQbN = jHam9YFQbN + 1;
            }
            XwKiVh2Helyb++;
        };
    }
    printf ("%d", sWQ1DHs[0]);
    for (XwKiVh2Helyb = 1; XwKiVh2Helyb < jHam9YFQbN; XwKiVh2Helyb++)
        printf (",%d", sWQ1DHs[XwKiVh2Helyb]);
}

