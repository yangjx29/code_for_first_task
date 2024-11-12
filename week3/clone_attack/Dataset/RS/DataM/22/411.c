void  main () {
    char gaPiIXuonH [(2482 - 482)];
    int aTJGXzdk7;
    int wlVNbFQ;
    int B7VoPJCT;
    int k;
    int FU4zWg1YI;
    int yJ7Wex0iKvuS;
    int a [(1066 - 766)] = {(392 - 392)};
    gets (gaPiIXuonH);
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
    aTJGXzdk7 = strlen (gaPiIXuonH);
    yJ7Wex0iKvuS = (122 - 122);
    {
        wlVNbFQ = 84 - 84;
        while (wlVNbFQ < aTJGXzdk7) {
            if (gaPiIXuonH[wlVNbFQ] == ',')
                yJ7Wex0iKvuS++;
            wlVNbFQ = wlVNbFQ + 1;
        };
    }
    B7VoPJCT = -(614 - 613);
    {
        wlVNbFQ = 477 - 477;
        while (yJ7Wex0iKvuS > wlVNbFQ) {
            B7VoPJCT = B7VoPJCT +1;
            k = B7VoPJCT;
            while (!(',' == gaPiIXuonH[B7VoPJCT]))
                B7VoPJCT = B7VoPJCT +1;
            for (FU4zWg1YI = k; FU4zWg1YI < B7VoPJCT; FU4zWg1YI = FU4zWg1YI +1)
                a[wlVNbFQ] = a[wlVNbFQ] + (int) ((gaPiIXuonH[FU4zWg1YI] - '0') * pow ((614 - 604), B7VoPJCT -FU4zWg1YI-(801 - 800)));
            wlVNbFQ = wlVNbFQ + 1;
        };
    }
    B7VoPJCT = B7VoPJCT +1;
    {
        FU4zWg1YI = B7VoPJCT;
        while (FU4zWg1YI < aTJGXzdk7) {
            a[yJ7Wex0iKvuS] += (int) ((gaPiIXuonH[FU4zWg1YI] - '0') * pow (10, aTJGXzdk7 - (60 - 59) - FU4zWg1YI));
            FU4zWg1YI = FU4zWg1YI +1;
        };
    }
    FU4zWg1YI = (848 - 847);
    {
        wlVNbFQ = yJ7Wex0iKvuS;
        while (wlVNbFQ > (357 - 357)) {
            {
                B7VoPJCT = 555 - 555;
                while (B7VoPJCT < wlVNbFQ) {
                    if (a[B7VoPJCT] < a[B7VoPJCT +(637 - 636)]) {
                        k = a[B7VoPJCT +(355 - 354)];
                        a[B7VoPJCT +(144 - 143)] = a[B7VoPJCT];
                        a[B7VoPJCT] = k;
                    }
                    B7VoPJCT = B7VoPJCT +1;
                };
            }
            wlVNbFQ = wlVNbFQ - 1;
        };
    }
    {
        wlVNbFQ = 82 - 81;
        while (wlVNbFQ <= yJ7Wex0iKvuS) {
            if (a[wlVNbFQ] == a[(167 - 167)])
                FU4zWg1YI++;
            wlVNbFQ = wlVNbFQ + 1;
        };
    }
    if (yJ7Wex0iKvuS == (436 - 436) || FU4zWg1YI == yJ7Wex0iKvuS + (611 - 610))
        ;
    else {
        wlVNbFQ = (563 - 563);
        while (a[wlVNbFQ] == a[0])
            wlVNbFQ = wlVNbFQ + 1;
        printf ("%d", a[wlVNbFQ]);
    };
}

