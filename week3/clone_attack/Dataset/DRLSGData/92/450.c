int array [(625 - 525)] [(293 - 291)] [2] [(1490 - 490)];

int CF1HqW (int KwNDYohTGVk [], int low, int high) {
    int bgS9JGFv, ZfnLkK;
    int n, P3OpJuYyIU;
    bgS9JGFv = low - (817 - 816);
    n = KwNDYohTGVk[high];
    {
        ZfnLkK = low;
        while (high > ZfnLkK) {
            if (n >= KwNDYohTGVk[ZfnLkK]) {
                bgS9JGFv++;
                P3OpJuYyIU = KwNDYohTGVk[bgS9JGFv];
                KwNDYohTGVk[bgS9JGFv] = KwNDYohTGVk[ZfnLkK];
                KwNDYohTGVk[ZfnLkK] = P3OpJuYyIU;
            }
            ZfnLkK++;
        }
    }
    P3OpJuYyIU = KwNDYohTGVk[bgS9JGFv + (51 - 50)];
    KwNDYohTGVk[bgS9JGFv + (944 - 943)] = KwNDYohTGVk[high];
    KwNDYohTGVk[high] = P3OpJuYyIU;
    return bgS9JGFv + (274 - 273);
}

void  QuickSort (int KwNDYohTGVk [], int low, int high) {
    int bgS9JGFv;
    if (high > low) {
        bgS9JGFv = CF1HqW (KwNDYohTGVk, low, high);
        QuickSort (KwNDYohTGVk, low, bgS9JGFv - (47 - 46));
        QuickSort (KwNDYohTGVk, bgS9JGFv + (615 - 614), high);
    }
}

main () {
    int c [100];
    int n, bgS9JGFv, ZfnLkK, YpE1nDSkL, P3OpJuYyIU, V48GzRAlXO, bVZHAudr0p, o;
    int finish;
    {
        bgS9JGFv = (50 - 50);
        while (n != (557 - 557)) {
            finish = (191 - 191);
            bVZHAudr0p = (185 - 185);
            scanf ("%d", &n);
            {
                ZfnLkK = (601 - 601);
                while (n > ZfnLkK) {
                    scanf ("%d", &P3OpJuYyIU);
                    array[bgS9JGFv][(904 - 904)][(349 - 349)][ZfnLkK] = P3OpJuYyIU;
                    array[bgS9JGFv][(114 - 114)][(224 - 223)][ZfnLkK] = (10 - 10);
                    ZfnLkK++;
                }
            }
            V48GzRAlXO = (768 - 768);
            QuickSort (array[bgS9JGFv][(866 - 866)][(253 - 253)], (254 - 254), n - (17 - 16));
            {
                ZfnLkK = (845 - 845);
                while (n > ZfnLkK) {
                    scanf ("%d", &P3OpJuYyIU);
                    array[bgS9JGFv][(214 - 213)][(717 - 717)][ZfnLkK] = P3OpJuYyIU;
                    array[bgS9JGFv][(359 - 358)][(700 - 699)][ZfnLkK] = (142 - 142);
                    ZfnLkK++;
                }
            }
            QuickSort (array[bgS9JGFv][(260 - 259)][(964 - 964)], (262 - 262), n - (676 - 675));
            for (; !finish;) {
                {
                    ZfnLkK = (569 - 569);
                    while (n > ZfnLkK) {
                        if (!((898 - 898) != array[bgS9JGFv][(462 - 462)][(421 - 420)][ZfnLkK])) {
                            break;
                        }
                        ZfnLkK++;
                    }
                }
                for (YpE1nDSkL = (775 - 775); n > YpE1nDSkL; YpE1nDSkL++) {
                    if (!((211 - 211) != array[bgS9JGFv][(272 - 271)][(328 - 327)][YpE1nDSkL])) {
                        break;
                    }
                }
                {
                    bVZHAudr0p = n - (402 - 401);
                    for (; 0 <= bVZHAudr0p;) {
                        if (!(0 != array[bgS9JGFv][0][(977 - 976)][bVZHAudr0p])) {
                            break;
                        }
                        bVZHAudr0p--;
                    }
                }
                {
                    o = n - (357 - 356);
                    while (o >= 0) {
                        if (!(0 != array[bgS9JGFv][(737 - 736)][(725 - 724)][o])) {
                            break;
                        }
                        o--;
                    }
                }
                if (array[bgS9JGFv][0][0][bVZHAudr0p] > array[bgS9JGFv][(901 - 900)][0][o]) {
                    array[bgS9JGFv][0][1][bVZHAudr0p] = 1;
                    array[bgS9JGFv][1][1][o] = 1;
                    V48GzRAlXO++;
                }
                else {
                    if (array[bgS9JGFv][0][0][ZfnLkK] > array[bgS9JGFv][1][0][YpE1nDSkL]) {
                        V48GzRAlXO++;
                        array[bgS9JGFv][0][1][ZfnLkK] = 1;
                        array[bgS9JGFv][1][1][YpE1nDSkL] = 1;
                    }
                    else {
                        if (array[bgS9JGFv][1][0][o] > array[bgS9JGFv][0][0][ZfnLkK]) {
                            V48GzRAlXO--;
                        }
                        array[bgS9JGFv][0][1][ZfnLkK] = 1;
                        array[bgS9JGFv][1][1][o] = 1;
                    }
                }
                finish = 1;
                {
                    ZfnLkK = 0;
                    while (ZfnLkK < n) {
                        if (array[bgS9JGFv][1][1][ZfnLkK] == 0) {
                            finish = 0;
                        }
                        ZfnLkK++;
                    }
                }
            }
            c[bgS9JGFv] = V48GzRAlXO *200;
            bgS9JGFv++;
        }
    }
    {
        ZfnLkK = 0;
        while (ZfnLkK < bgS9JGFv - 1) {
            printf ("%d\n", c[ZfnLkK]);
            ZfnLkK++;
        }
    }
}

