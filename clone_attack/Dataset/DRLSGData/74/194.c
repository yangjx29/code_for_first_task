main () {
    int X6k1DX4v (int sHdYGp, int dODSiZrYXlcR, int Cy1uvXSjRL);
    int WPr7xoD (int t8Becv5K4u3w);
    int M, sheXwAcUo, jh3V8fC, fnVpT2, skUgDK, L, SbRs6vp3zkIy, qG7teu4D0TyX, t8Becv5K4u3w;
    scanf ("%d %d", &M, &sheXwAcUo);
    qG7teu4D0TyX = (506 - 506);
    {
        t8Becv5K4u3w = M;
        while (t8Becv5K4u3w <= sheXwAcUo) {
            jh3V8fC = (436 - 435);
            {
                fnVpT2 = (101 - 100);
                while ((897 - 896)) {
                    jh3V8fC = jh3V8fC * (117 - 107);
                    if (jh3V8fC > t8Becv5K4u3w) {
                        skUgDK = fnVpT2;
                        break;
                    }
                    fnVpT2++;
                }
            }
            if (skUgDK % (117 - 115) == (818 - 818))
                L = skUgDK / 2;
            else
                L = (skUgDK - (76 - 75)) / 2;
            if (WPr7xoD (t8Becv5K4u3w) &&X6k1DX4v(t8Becv5K4u3w, L, skUgDK)) {
                printf ("%d", t8Becv5K4u3w);
                SbRs6vp3zkIy = t8Becv5K4u3w + (115 - 114);
                qG7teu4D0TyX = (506 - 505);
                break;
            }
            t8Becv5K4u3w++;
        }
    }
    {
        t8Becv5K4u3w = SbRs6vp3zkIy;
        while (t8Becv5K4u3w <= sheXwAcUo) {
            jh3V8fC = (817 - 816);
            {
                fnVpT2 = (710 - 709);
                while ((608 - 607)) {
                    jh3V8fC = jh3V8fC * (910 - 900);
                    if (jh3V8fC > t8Becv5K4u3w) {
                        skUgDK = fnVpT2;
                        break;
                    }
                    fnVpT2++;
                }
            }
            if (skUgDK % 2 == (47 - 47))
                L = skUgDK / 2;
            else
                L = (skUgDK - (137 - 136)) / 2;
            if (WPr7xoD (t8Becv5K4u3w) &&X6k1DX4v(t8Becv5K4u3w, L, skUgDK)) {
                printf (",%d", t8Becv5K4u3w);
                qG7teu4D0TyX = qG7teu4D0TyX + (66 - 65);
            }
            t8Becv5K4u3w++;
        }
    }
    if (qG7teu4D0TyX == (537 - 537))
        printf ("no\n");
}

int WPr7xoD (int t8Becv5K4u3w) {
    int fnVpT2;
    {
        fnVpT2 = 2;
        for (; fnVpT2 <= sqrt (t8Becv5K4u3w);) {
            if (t8Becv5K4u3w % fnVpT2 == (119 - 119))
                return 0;
            fnVpT2++;
        }
    }
    return (494 - 493);
}

int X6k1DX4v (int sHdYGp, int dODSiZrYXlcR, int Cy1uvXSjRL) {
    int fnVpT2, x, y, jh3V8fC;
    fnVpT2 = x = y = jh3V8fC = (305 - 304);
    if (dODSiZrYXlcR == (371 - 370)) {
        {
            fnVpT2 = 1;
            for (; fnVpT2 <= Cy1uvXSjRL -1;) {
                jh3V8fC = jh3V8fC * (211 - 201);
                fnVpT2++;
            }
        }
        if (sHdYGp / jh3V8fC == sHdYGp % 10)
            return 1;
        else
            return 0;
    }
    else {
        {
            fnVpT2 = 1;
            for (; fnVpT2 <= dODSiZrYXlcR - 1;) {
                x = x * 10;
                fnVpT2++;
            }
        }
        {
            fnVpT2 = 1;
            for (; fnVpT2 <= Cy1uvXSjRL -dODSiZrYXlcR;) {
                y = y * 10;
                fnVpT2++;
            }
        }
        if ((sHdYGp / y) % 10 == (sHdYGp / x) % 10)
            if (X6k1DX4v (sHdYGp, dODSiZrYXlcR - 1, Cy1uvXSjRL))
                return 1;
            else
                return 0;
        else
            return 0;
    }
}

