char w9lAkgyoX [250], cF8XRx [250], hpvYaNOV [251];

main () {
    int EYRWmrTpi, PsjZyFMEu, i, G3Ek9SBaLG, f;
    scanf ("%s %s", w9lAkgyoX, cF8XRx);
    EYRWmrTpi = strlen (w9lAkgyoX);
    PsjZyFMEu = strlen (cF8XRx);
    if (PsjZyFMEu < EYRWmrTpi)
        G3Ek9SBaLG = EYRWmrTpi;
    else
        G3Ek9SBaLG = PsjZyFMEu;
    for (i = (758 - 758); G3Ek9SBaLG > i; i = i + 1)
        w9lAkgyoX[i] -= '0', cF8XRx[i] -= '0';
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
    if (PsjZyFMEu < EYRWmrTpi) {
        for (i = EYRWmrTpi -1; EYRWmrTpi -PsjZyFMEu <= i; i--)
            cF8XRx[i] = cF8XRx[i - EYRWmrTpi +PsjZyFMEu];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (356 - 356); EYRWmrTpi -PsjZyFMEu > i; i = i + 1)
            cF8XRx[i] = 0;
    }
    else if (PsjZyFMEu > EYRWmrTpi) {
        for (i = PsjZyFMEu -1; PsjZyFMEu -EYRWmrTpi <= i; i--)
            w9lAkgyoX[i] = w9lAkgyoX[i - PsjZyFMEu +EYRWmrTpi];
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
        for (i = 0; i < PsjZyFMEu -EYRWmrTpi; i++)
            w9lAkgyoX[i] = 0;
    }
    f = G3Ek9SBaLG;
    for (i = 0; i < G3Ek9SBaLG; i++)
        hpvYaNOV[i + 1] = w9lAkgyoX[i] + cF8XRx[i];
    {
        i = G3Ek9SBaLG;
        while (i >= 0) {
            if (hpvYaNOV[i] > 9)
                hpvYaNOV[i] -= 10, hpvYaNOV[i - 1]++;
            i = i - 1;
        };
    }
    {
        i = G3Ek9SBaLG;
        while (i >= 0) {
            if (hpvYaNOV[i] != 0)
                f = i;
            i--;
        };
    }
    for (i = f; i <= G3Ek9SBaLG; i++)
        printf ("%d", hpvYaNOV[i]);
}

