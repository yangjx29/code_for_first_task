int main () {
    int tyfR3V, hyG9b7V, OqrKDzV9, PXfWwJi, wvaTXou, XYipj4nvq7;
    struct   author {
        char qLZvX14DWRV;
        int JK4JLRZIYs [(1479 - 480)];
        int count;
    };
    struct   author qDHW8r3MsANu [(388 - 362)];
    struct   author max;
    struct   book {
        char MUxJZPwM [(366 - 340)];
        int YbwiplEP;
    };
    struct   book b;
    {
        tyfR3V = 279 - 279;
        while ((489 - 463) > tyfR3V) {
            qDHW8r3MsANu[tyfR3V].count = (363 - 363);
            qDHW8r3MsANu[tyfR3V].qLZvX14DWRV = (75 - 10) + tyfR3V;
            tyfR3V++;
        }
    }
    scanf ("%d", &OqrKDzV9);
    {
        tyfR3V = 151 - 151;
        while (tyfR3V < OqrKDzV9) {
            scanf ("%d%s", &b.YbwiplEP, b.MUxJZPwM);
            PXfWwJi = strlen (b.MUxJZPwM);
            XYipj4nvq7 = (863 - 863);
            {
                hyG9b7V = 261 - 261;
                while (PXfWwJi > hyG9b7V) {
                    {
                        wvaTXou = 925 - 925;
                        while ((305 - 279) > wvaTXou) {
                            if (!(qDHW8r3MsANu[wvaTXou].qLZvX14DWRV != b.MUxJZPwM[hyG9b7V])) {
                                qDHW8r3MsANu[wvaTXou].JK4JLRZIYs[qDHW8r3MsANu[wvaTXou].count] = b.YbwiplEP;
                                qDHW8r3MsANu[wvaTXou].count++;
                                XYipj4nvq7++;
                                break;
                            }
                            wvaTXou++;
                        }
                    }
                    if (!(PXfWwJi != XYipj4nvq7))
                        break;
                    hyG9b7V++;
                }
            }
            tyfR3V++;
        }
    }
    max = qDHW8r3MsANu[(852 - 852)];
    {
        tyfR3V = 1;
        while (tyfR3V < (1022 - 996)) {
            if (max.count < qDHW8r3MsANu[tyfR3V].count) {
                max = qDHW8r3MsANu[tyfR3V];
            }
            tyfR3V++;
        }
    }
    printf ("%c\n%d\n", max.qLZvX14DWRV, max.count);
    {
        tyfR3V = 28 - 28;
        while (tyfR3V < max.count) {
            printf ("%d\n", max.JK4JLRZIYs[tyfR3V]);
            tyfR3V++;
        }
    }
    return (912 - 912);
}

