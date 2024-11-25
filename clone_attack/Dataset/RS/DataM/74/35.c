int main () {
    long  znUq7eyE9u [100000];
    long  o3vBMNS4h [100000];
    int RKzO0j5, nACx1VuydRt9, dnqDM2AS, TYq6eCka1mn, j, mKTw78yf9 = (425 - 425), EjVPaS0 = 0, r, hRxTMX, dcSRUG, y8qrYK3dF, zdfz3jkaKHn4, cZYJpQlxd = 0;
    j = 0;
    scanf ("%d %d", &RKzO0j5, &nACx1VuydRt9);
    for (dnqDM2AS = RKzO0j5; dnqDM2AS <= nACx1VuydRt9; dnqDM2AS = dnqDM2AS + 1) {
        for (TYq6eCka1mn = (788 - 786); TYq6eCka1mn < dnqDM2AS; TYq6eCka1mn = TYq6eCka1mn +1) {
            if (dnqDM2AS % TYq6eCka1mn == 0)
                break;
        }
        if (TYq6eCka1mn == dnqDM2AS) {
            mKTw78yf9 = mKTw78yf9 + 1;
            znUq7eyE9u[j] = dnqDM2AS;
            j = j + 1;
        };
    }
    j = 0;
    for (TYq6eCka1mn = 0; TYq6eCka1mn < mKTw78yf9; TYq6eCka1mn = TYq6eCka1mn +1) {
        if (znUq7eyE9u[TYq6eCka1mn] >= (182 - 180) && znUq7eyE9u[TYq6eCka1mn] <= 9) {
            EjVPaS0 = (378 - 377);
            cZYJpQlxd = cZYJpQlxd + 1;
            o3vBMNS4h[j] = znUq7eyE9u[TYq6eCka1mn];
            j = j + 1;
        }
        if (znUq7eyE9u[TYq6eCka1mn] >= 100 && znUq7eyE9u[TYq6eCka1mn] <= 999) {
            for (r = 0; r <= 9; r = r + 1) {
                for (hRxTMX = 0; hRxTMX <= 9; hRxTMX = hRxTMX + 1) {
                    dcSRUG = 0;
                    while (dcSRUG <= 9) {
                        if (r * 100 + hRxTMX * 10 + dcSRUG == znUq7eyE9u[TYq6eCka1mn]) {
                            if (r == dcSRUG) {
                                EjVPaS0 = (445 - 444);
                                cZYJpQlxd = cZYJpQlxd + 1;
                                o3vBMNS4h[j] = znUq7eyE9u[TYq6eCka1mn];
                                j = j + 1;
                            };
                        }
                        dcSRUG = dcSRUG + 1;
                    };
                };
            };
        }
        if (znUq7eyE9u[TYq6eCka1mn] >= 1000 && znUq7eyE9u[TYq6eCka1mn] <= 9999) {
            for (r = 0; r <= 9; r = r + 1) {
                for (hRxTMX = 0; hRxTMX <= 9; hRxTMX = hRxTMX + 1) {
                    for (dcSRUG = 0; dcSRUG <= 9; dcSRUG = dcSRUG + 1) {
                        for (y8qrYK3dF = 0; y8qrYK3dF <= 9; y8qrYK3dF = y8qrYK3dF + 1) {
                            if (y8qrYK3dF * 1000 + r * 100 + hRxTMX * 10 + dcSRUG == znUq7eyE9u[TYq6eCka1mn]) {
                                if (y8qrYK3dF == dcSRUG && r == hRxTMX) {
                                    EjVPaS0 = 1;
                                    cZYJpQlxd = cZYJpQlxd + 1;
                                    o3vBMNS4h[j] = znUq7eyE9u[TYq6eCka1mn];
                                    j = j + 1;
                                };
                            };
                        };
                    };
                };
            };
        }
        if (znUq7eyE9u[TYq6eCka1mn] >= 10000 && znUq7eyE9u[TYq6eCka1mn] <= (100494 - 495)) {
            for (y8qrYK3dF = 0; y8qrYK3dF <= 9; y8qrYK3dF = y8qrYK3dF + 1) {
                for (zdfz3jkaKHn4 = 0; zdfz3jkaKHn4 <= 9; zdfz3jkaKHn4++) {
                    r = 0;
                    while (r <= 9) {
                        for (hRxTMX = 0; hRxTMX <= 9; hRxTMX++) {
                            for (dcSRUG = 0; dcSRUG <= 9; dcSRUG = dcSRUG + 1) {
                                if (y8qrYK3dF * 10000 + zdfz3jkaKHn4 * 1000 + r * 100 + hRxTMX * 10 + dcSRUG == znUq7eyE9u[TYq6eCka1mn]) {
                                    if (y8qrYK3dF == dcSRUG && zdfz3jkaKHn4 == hRxTMX) {
                                        EjVPaS0 = 1;
                                        cZYJpQlxd++;
                                        o3vBMNS4h[j] = znUq7eyE9u[TYq6eCka1mn];
                                        j++;
                                    };
                                };
                            };
                        }
                        r = r + 1;
                    };
                };
            };
        };
    }
    if (EjVPaS0 == 0)
        printf ("no");
    else {
        for (TYq6eCka1mn = 0; TYq6eCka1mn < cZYJpQlxd; TYq6eCka1mn = TYq6eCka1mn +1) {
            if (TYq6eCka1mn == 0)
                printf ("%ld", o3vBMNS4h[TYq6eCka1mn]);
            else
                printf (",%ld", o3vBMNS4h[TYq6eCka1mn]);
        };
    }
    return 0;
}

