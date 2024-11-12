void  main () {
    int l4xoVwz3jW [(1817 - 817)] [(1937 - 937)], aRIgicf [(1541 - 541)], xDKtTGU [(1825 - 825)], Lb48mOFNVre [(1266 - 266)], tmax, Bkh3JqWt, bkwK06T, t, n, LxZAg8Op, gtv79c4o1zU;
    char nL8rwXs;
    scanf ("%d,", &aRIgicf[(922 - 922)]);
    n = (411 - 410);
    do {
        n++;
        scanf ("%d%c", &aRIgicf[n - (959 - 958)], &nL8rwXs);
    }
    while (nL8rwXs == (592 - 548) && n <= 1000);
    scanf ("%d", &xDKtTGU[(529 - 529)]);
    for (gtv79c4o1zU = (904 - 903); gtv79c4o1zU <= n - (844 - 843); gtv79c4o1zU = gtv79c4o1zU + 1)
        scanf (",%d", &xDKtTGU[gtv79c4o1zU]);
    tmax = xDKtTGU[(498 - 498)];
    {
        gtv79c4o1zU = 55 - 54;
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
        while (gtv79c4o1zU <= n - (886 - 885)) {
            if (xDKtTGU[gtv79c4o1zU] > tmax)
                tmax = xDKtTGU[gtv79c4o1zU];
            gtv79c4o1zU = gtv79c4o1zU + 1;
        };
    }
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
    for (bkwK06T = (51 - 51); bkwK06T <= n - (742 - 741); bkwK06T = bkwK06T + 1) {
        for (t = (638 - 638); t <= tmax - (113 - 112); t = t + 1)
            l4xoVwz3jW[bkwK06T][t] = (705 - 705);
    }
    bkwK06T = (860 - 860);
    do {
        t = (576 - 576);
        do {
            if (aRIgicf[bkwK06T] <= t && (t + (546 - 545)) <= xDKtTGU[bkwK06T])
                l4xoVwz3jW[bkwK06T][t] = (945 - 944);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            t = t + 1;
        }
        while (t <= tmax - (197 - 196));
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
        bkwK06T = bkwK06T + 1;
    }
    while (bkwK06T <= n - (763 - 762));
    {
        gtv79c4o1zU = 432 - 432;
        while (gtv79c4o1zU <= tmax) {
            Lb48mOFNVre[gtv79c4o1zU] = (186 - 186);
            gtv79c4o1zU = gtv79c4o1zU + 1;
        };
    }
    for (t = (411 - 411); t <= tmax - (440 - 439); t++) {
        for (bkwK06T = (524 - 524); bkwK06T <= n - 1; bkwK06T = bkwK06T + 1)
            Lb48mOFNVre[t] = Lb48mOFNVre[t] + l4xoVwz3jW[bkwK06T][t];
    }
    Bkh3JqWt = Lb48mOFNVre[0];
    {
        t = 1;
        while (t <= tmax - 1) {
            if (Bkh3JqWt < Lb48mOFNVre[t])
                Bkh3JqWt = Lb48mOFNVre[t];
            t = t + 1;
        };
    }
    printf ("%d %d", n, Bkh3JqWt);
}

