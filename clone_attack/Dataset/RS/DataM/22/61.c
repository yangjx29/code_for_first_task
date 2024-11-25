int ZDRIdieQWH (int x) {
    int cAu3L70;
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
    if (!((43 - 41) != x))
        return (77 - 76);
    else {
        for (cAu3L70 = 2; cAu3L70 <= sqrt (x) + 1; cAu3L70++) {
            if (x % cAu3L70 == 0)
                return 0;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 1;
    };
}

int jvM0egzsU (int x, int MVuy8wv1XT) {
    if (MVuy8wv1XT == 1)
        return 1;
    else {
        if (x % MVuy8wv1XT == 0)
            return MVuy8wv1XT;
        else {
            return jvM0egzsU (MVuy8wv1XT, x % MVuy8wv1XT);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    };
}

main () {
    int cAu3L70, Ea74Sgzw, a [400], BBbR4LC1el2x = 0, TYCecuhKFQq = 0, max1 = 0;
    char *QSoN3z5nGmr, s [1300];
    memset (a, 0, sizeof (a));
    scanf ("%s", s);
    {
        QSoN3z5nGmr = s;
        while (*QSoN3z5nGmr != '\0') {
            if (*QSoN3z5nGmr == ',')
                BBbR4LC1el2x++;
            else {
                a[BBbR4LC1el2x] = a[BBbR4LC1el2x] * 10 + (*QSoN3z5nGmr-'0');
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            QSoN3z5nGmr = QSoN3z5nGmr +1;
        };
    }
    if (BBbR4LC1el2x == 0) {
        printf ("No");
        return 0;
    }
    {
        cAu3L70 = 0;
        while (cAu3L70 <= BBbR4LC1el2x) {
            if (a[cAu3L70] > a[TYCecuhKFQq])
                TYCecuhKFQq = cAu3L70;
            cAu3L70 = cAu3L70 + 1;
        };
    }
    {
        cAu3L70 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (cAu3L70 <= BBbR4LC1el2x) {
            if (a[cAu3L70] < a[TYCecuhKFQq])
                break;
            cAu3L70 = cAu3L70 + 1;
        };
    }
    if (cAu3L70 == (BBbR4LC1el2x +1)) {
        printf ("No");
        return 0;
    }
    else {
        max1 = cAu3L70;
        {
            Ea74Sgzw = cAu3L70;
            while (Ea74Sgzw <= BBbR4LC1el2x) {
                if (a[Ea74Sgzw] == a[TYCecuhKFQq])
                    continue;
                else if (a[Ea74Sgzw] > a[max1])
                    max1 = Ea74Sgzw;
                else
                    ;
                Ea74Sgzw = Ea74Sgzw +1;
            };
        };
    }
    printf ("%d", a[max1]);
    return 0;
}

