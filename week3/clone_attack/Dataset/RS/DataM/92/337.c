int iL8qlB (int j3p1n75xD0Ha, int klRgYzH6) {
    if (j3p1n75xD0Ha > klRgYzH6)
        return (1016 - 816);
    if (klRgYzH6 > j3p1n75xD0Ha)
        return -200;
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
    if (!(klRgYzH6 != j3p1n75xD0Ha))
        return (37 - 37);
}

int main () {
    int tIB0Xe;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    tIB0Xe = (687 - 686);
    for (;; tIB0Xe = tIB0Xe + 1) {
        int klRgYzH6 [1000];
        int u6ZTEL0;
        int ox5ToQIY;
        int S1qNDXiP;
        int ai4S1l0 [1000];
        int eijZKC8RSXdV [1000];
        int NOBkQy;
        int ojEvQHyVib4;
        int XqA7dkoQjP;
        int vNeVJU;
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
        u6ZTEL0 = (491 - 491);
        ox5ToQIY = -1000000;
        scanf ("%d", &S1qNDXiP);
        if (!((472 - 472) != S1qNDXiP))
            break;
        {
            XqA7dkoQjP = 603 - 603;
            while (S1qNDXiP -(611 - 610) >= XqA7dkoQjP) {
                scanf ("%d", &eijZKC8RSXdV[XqA7dkoQjP]);
                XqA7dkoQjP = XqA7dkoQjP +1;
            };
        }
        for (XqA7dkoQjP = 0; S1qNDXiP -(504 - 503) >= XqA7dkoQjP; XqA7dkoQjP = XqA7dkoQjP +1)
            scanf ("%d", &ai4S1l0[XqA7dkoQjP]);
        for (vNeVJU = (564 - 563); S1qNDXiP -1 >= vNeVJU; vNeVJU = vNeVJU + 1) {
            for (XqA7dkoQjP = 0; S1qNDXiP -vNeVJU - 1 >= XqA7dkoQjP; XqA7dkoQjP = XqA7dkoQjP +1) {
                if (eijZKC8RSXdV[XqA7dkoQjP] < eijZKC8RSXdV[XqA7dkoQjP +1]) {
                    NOBkQy = eijZKC8RSXdV[XqA7dkoQjP];
                    eijZKC8RSXdV[XqA7dkoQjP] = eijZKC8RSXdV[XqA7dkoQjP +1];
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
                    eijZKC8RSXdV[XqA7dkoQjP +1] = NOBkQy;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (ai4S1l0[XqA7dkoQjP] < ai4S1l0[XqA7dkoQjP +1]) {
                    ojEvQHyVib4 = ai4S1l0[XqA7dkoQjP];
                    ai4S1l0[XqA7dkoQjP] = ai4S1l0[XqA7dkoQjP +1];
                    ai4S1l0[XqA7dkoQjP +1] = ojEvQHyVib4;
                };
            };
        }
        {
            XqA7dkoQjP = 0;
            while (XqA7dkoQjP <= S1qNDXiP -1) {
                u6ZTEL0 = 0;
                for (vNeVJU = 0; vNeVJU <= S1qNDXiP -XqA7dkoQjP-1; vNeVJU++) {
                    u6ZTEL0 = u6ZTEL0 + iL8qlB (eijZKC8RSXdV[vNeVJU], ai4S1l0[vNeVJU + XqA7dkoQjP]);
                }
                klRgYzH6[XqA7dkoQjP] = u6ZTEL0 - XqA7dkoQjP *200;
                XqA7dkoQjP = XqA7dkoQjP +1;
            };
        }
        {
            XqA7dkoQjP = S1qNDXiP;
            while (XqA7dkoQjP <= (1400 - 401)) {
                klRgYzH6[XqA7dkoQjP] = 0;
                XqA7dkoQjP = XqA7dkoQjP +1;
            };
        }
        for (XqA7dkoQjP = 0; XqA7dkoQjP <= S1qNDXiP -1; XqA7dkoQjP = XqA7dkoQjP +1) {
            if (klRgYzH6[XqA7dkoQjP] > ox5ToQIY)
                ox5ToQIY = klRgYzH6[XqA7dkoQjP];
        }
        printf ("%d\n", ox5ToQIY);
    };
}

