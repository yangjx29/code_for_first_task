int sushu (int gLiD92Rlbn) {
    int wSfcXJrL0s5;
    if (gLiD92Rlbn == (226 - 224))
        return (574 - 573);
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
    for (wSfcXJrL0s5 = 2; sqrt (gLiD92Rlbn) >= wSfcXJrL0s5; wSfcXJrL0s5++) {
        if (gLiD92Rlbn % wSfcXJrL0s5 == (935 - 935))
            return (85 - 85);
    }
    return (979 - 978);
}

int huiwen (int gLiD92Rlbn) {
    int wBjYdg3 [(1357 - 857)], odFHWD3uw [500], wSfcXJrL0s5, i3rmEku, y;
    y = gLiD92Rlbn;
    {
        wSfcXJrL0s5 = 0;
        while (1) {
            wBjYdg3[wSfcXJrL0s5] = gLiD92Rlbn % 10;
            gLiD92Rlbn = (gLiD92Rlbn - wBjYdg3[wSfcXJrL0s5]) / 10;
            if (gLiD92Rlbn == 0)
                break;
            wSfcXJrL0s5++;
        };
    }
    gLiD92Rlbn = y;
    for (i3rmEku = wSfcXJrL0s5; i3rmEku >= 0; i3rmEku--) {
        odFHWD3uw[i3rmEku] = gLiD92Rlbn % 10;
        gLiD92Rlbn = (gLiD92Rlbn - odFHWD3uw[i3rmEku]) / 10;
        if (gLiD92Rlbn == 0)
            break;
    }
    {
        i3rmEku = 0;
        while (i3rmEku <= wSfcXJrL0s5) {
            if (!(odFHWD3uw[i3rmEku] == wBjYdg3[i3rmEku]))
                return 0;
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
            i3rmEku++;
        };
    }
    return 1;
}

main () {
    int OuW5bv, n, F0kQSrcwiL = 0, wSfcXJrL0s5;
    scanf ("%d %d", &OuW5bv, &n);
    {
        wSfcXJrL0s5 = OuW5bv;
        while (wSfcXJrL0s5 <= n) {
            if (sushu (wSfcXJrL0s5) == 0)
                continue;
            else {
                if (wSfcXJrL0s5 / 10 == 0 && F0kQSrcwiL == 0) {
                    printf ("%d", wSfcXJrL0s5);
                    F0kQSrcwiL = F0kQSrcwiL +1;
                }
                else {
                    if (wSfcXJrL0s5 / 10 == 0 && F0kQSrcwiL != 0) {
                        F0kQSrcwiL++;
                        printf (",%d", wSfcXJrL0s5);
                    }
                    else {
                        if (wSfcXJrL0s5 >= 10 && huiwen (wSfcXJrL0s5) == 1 && F0kQSrcwiL == 0) {
                            printf ("%d", wSfcXJrL0s5);
                            F0kQSrcwiL++;
                        }
                        else {
                            if (wSfcXJrL0s5 >= 10 && huiwen (wSfcXJrL0s5) == 1 && F0kQSrcwiL != 0) {
                                printf (",%d", wSfcXJrL0s5);
                                F0kQSrcwiL++;
                            };
                        };
                    };
                };
            }
            wSfcXJrL0s5++;
        };
    }
    if (F0kQSrcwiL == 0)
        printf ("no");
}

