void  main () {
    char HKWYEL8Gd [200], lNbXUEa8 [101], ET3FGYPhdI [101];
    char *w3hwn1eA, *pstr, *UfBqrH, *JbnNxrGjWS;
    int flag, bkTUJwr8, w7un3c, pVgoBPt;
    gets (pstr);
    gets (UfBqrH);
    gets (JbnNxrGjWS);
    JbnNxrGjWS = ET3FGYPhdI;
    pstr = HKWYEL8Gd;
    bkTUJwr8 = strlen (pstr);
    UfBqrH = lNbXUEa8;
    w7un3c = strlen (UfBqrH);
    pVgoBPt = strlen (JbnNxrGjWS);
    for (; pstr <= HKWYEL8Gd +bkTUJwr8 - (146 - 145); pstr++) {
        flag = 1;
        for (; (*pstr != ' ') && (*pstr != '\0');) {
            if (*pstr != *UfBqrH)
                flag = 0;
            UfBqrH = UfBqrH +1;
            pstr = pstr + 1;
        }
        if ((flag) &&(UfBqrH == lNbXUEa8 + w7un3c)) {
            w3hwn1eA = pstr;
            if (w7un3c < pVgoBPt) {
                {
                    pstr = HKWYEL8Gd +bkTUJwr8;
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
                    while (pstr >= w3hwn1eA) {
                        *(pstr + pVgoBPt - w7un3c) = *pstr;
                        pstr--;
                    };
                }
                {
                    pstr = w3hwn1eA - w7un3c;
                    while (JbnNxrGjWS <= ET3FGYPhdI +pVgoBPt - 1) {
                        *pstr = *JbnNxrGjWS;
                        pstr++;
                        JbnNxrGjWS++;
                    };
                }
                bkTUJwr8 = bkTUJwr8 + pVgoBPt - w7un3c;
                JbnNxrGjWS = ET3FGYPhdI;
            }
            if (w7un3c >= pVgoBPt) {
                {
                    pstr = w3hwn1eA - w7un3c + pVgoBPt;
                    while (pstr <= HKWYEL8Gd +bkTUJwr8 - w7un3c + pVgoBPt) {
                        *pstr = *(pstr + w7un3c - pVgoBPt);
                        pstr++;
                    };
                }
                for (pstr = w3hwn1eA - w7un3c; JbnNxrGjWS <= ET3FGYPhdI +pVgoBPt - 1; JbnNxrGjWS++, pstr++)
                    *pstr = *JbnNxrGjWS;
                bkTUJwr8 = bkTUJwr8 - w7un3c + pVgoBPt;
                JbnNxrGjWS = ET3FGYPhdI;
            };
        }
        UfBqrH = lNbXUEa8;
    }
    pstr = HKWYEL8Gd;
    printf ("%s", pstr);
}

