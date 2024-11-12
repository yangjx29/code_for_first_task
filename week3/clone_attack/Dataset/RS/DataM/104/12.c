int main () {
    int a1tgMq, n, a [(884 - 871)] = {(697 - 697)}, LFghlzRfLt [(430 - 417)] = {(103 - 103)}, eK7ZJLRc, pX59FM, p76zHfV2yW, f, BQmcVMP1, OybGY6s [13] = {(612 - 612)}, TYquGE [13] = {(740 - 740)}, i4 = 0;
    scanf ("%d %d", &a1tgMq, &n);
    a[0] = a1tgMq;
    {
        eK7ZJLRc = 535 - 534;
        while (a1tgMq > 0) {
            a[eK7ZJLRc] = a1tgMq / (406 - 404);
            eK7ZJLRc++;
            a1tgMq = a1tgMq / 2;
        };
    }
    for (BQmcVMP1 = (790 - 778); BQmcVMP1 >= 0; BQmcVMP1--) {
        if (a[BQmcVMP1] != 0) {
            OybGY6s[i4] = a[BQmcVMP1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i4++;
        };
    }
    i4 = 0;
    LFghlzRfLt[0] = n;
    for (pX59FM = 1; n > 0; pX59FM++) {
        LFghlzRfLt[pX59FM] = n / 2;
        n = n / 2;
    }
    {
        BQmcVMP1 = 12;
        while (BQmcVMP1 >= 0) {
            if (LFghlzRfLt[BQmcVMP1] != 0) {
                TYquGE[i4] = LFghlzRfLt[BQmcVMP1];
                i4++;
            }
            BQmcVMP1 = BQmcVMP1 -1;
        };
    }
    for (BQmcVMP1 = 0; BQmcVMP1 < 13; BQmcVMP1 = BQmcVMP1 +1) {
        if (OybGY6s[BQmcVMP1] != TYquGE[BQmcVMP1] || (OybGY6s[BQmcVMP1] == 0 && TYquGE[BQmcVMP1] == 0)) {
            printf ("%d", OybGY6s[BQmcVMP1 -1]);
            break;
        };
    }
    return 0;
}

