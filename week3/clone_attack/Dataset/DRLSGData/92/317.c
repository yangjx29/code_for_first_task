void  paixu (int plmUCFI2B5, int *w70xydDe6o2j) {
    int YMQX5N8OG, j1zwMxP, poxMS5Zg7;
    for (YMQX5N8OG = (650 - 650); YMQX5N8OG <= plmUCFI2B5 - (573 - 571); YMQX5N8OG = YMQX5N8OG +(719 - 718)) {
        for (j1zwMxP = YMQX5N8OG +(737 - 736); j1zwMxP <= plmUCFI2B5 - (857 - 856); j1zwMxP = j1zwMxP + (623 - 622)) {
            if (w70xydDe6o2j[YMQX5N8OG] < w70xydDe6o2j[j1zwMxP]) {
                poxMS5Zg7 = w70xydDe6o2j[YMQX5N8OG];
                w70xydDe6o2j[YMQX5N8OG] = w70xydDe6o2j[j1zwMxP];
                w70xydDe6o2j[j1zwMxP] = poxMS5Zg7;
            }
        }
    }
}

main () {
    int YMQX5N8OG, j1zwMxP, poxMS5Zg7, Hwcb5o9AYE, sum, plmUCFI2B5, CUNTnA, w70xydDe6o2j, t [(1625 - 625)], kAueJ4WS7fp8 [(1346 - 346)], ZC06ifHnVtc [1000];
    for (CUNTnA = (306 - 306); CUNTnA <= 1000; CUNTnA = CUNTnA +(414 - 413)) {
        scanf ("%d", &plmUCFI2B5);
        if (plmUCFI2B5 == (748 - 748)) {
            break;
        }
        {
            YMQX5N8OG = (160 - 160);
            while (YMQX5N8OG <= plmUCFI2B5 - (383 - 382)) {
                scanf ("%d", &t[YMQX5N8OG]);
                YMQX5N8OG = YMQX5N8OG +(440 - 439);
            }
        }
        {
            YMQX5N8OG = (993 - 993);
            while (YMQX5N8OG <= plmUCFI2B5 - 1) {
                scanf ("%d", &kAueJ4WS7fp8[YMQX5N8OG]);
                YMQX5N8OG = YMQX5N8OG +1;
            }
        }
        {
            YMQX5N8OG = (586 - 586);
            while (YMQX5N8OG <= plmUCFI2B5 - 1) {
                ZC06ifHnVtc[YMQX5N8OG] = -9;
                YMQX5N8OG = YMQX5N8OG +1;
            }
        }
        paixu (plmUCFI2B5, t);
        paixu (plmUCFI2B5, kAueJ4WS7fp8);
        for (YMQX5N8OG = (626 - 626); YMQX5N8OG <= plmUCFI2B5 - 1; YMQX5N8OG = YMQX5N8OG +1) {
            if (t[(642 - 642)] > kAueJ4WS7fp8[(395 - 395)]) {
                ZC06ifHnVtc[YMQX5N8OG] = (1018 - 818);
                {
                    poxMS5Zg7 = (975 - 975);
                    while (poxMS5Zg7 <= plmUCFI2B5 - (156 - 154) - YMQX5N8OG) {
                        t[poxMS5Zg7] = t[poxMS5Zg7 + 1];
                        poxMS5Zg7 = poxMS5Zg7 + 1;
                    }
                }
            }
            else {
                for (j1zwMxP = plmUCFI2B5 - 1 - YMQX5N8OG; j1zwMxP >= (237 - 237); j1zwMxP = j1zwMxP - 1) {
                    if (t[j1zwMxP] <= kAueJ4WS7fp8[j1zwMxP]) {
                        if (t[j1zwMxP] == kAueJ4WS7fp8[(936 - 936)])
                            ZC06ifHnVtc[YMQX5N8OG] = 0;
                        else {
                            ZC06ifHnVtc[YMQX5N8OG] = -(804 - 604);
                        }
                        for (poxMS5Zg7 = j1zwMxP; poxMS5Zg7 <= plmUCFI2B5 - 2 - YMQX5N8OG; poxMS5Zg7 = poxMS5Zg7 + 1) {
                            t[poxMS5Zg7] = t[poxMS5Zg7 + 1];
                        }
                        break;
                    }
                }
            }
            if (ZC06ifHnVtc[YMQX5N8OG] != 0 && ZC06ifHnVtc[YMQX5N8OG] != 200 && ZC06ifHnVtc[YMQX5N8OG] != -200) {
                if (t[0] < kAueJ4WS7fp8[0])
                    ZC06ifHnVtc[YMQX5N8OG] = -200;
                else
                    ZC06ifHnVtc[YMQX5N8OG] = 0;
                for (poxMS5Zg7 = 0; poxMS5Zg7 <= plmUCFI2B5 - 2 - YMQX5N8OG; poxMS5Zg7 = poxMS5Zg7 + 1) {
                    t[poxMS5Zg7] = t[poxMS5Zg7 + 1];
                }
            }
            for (poxMS5Zg7 = 0; poxMS5Zg7 <= plmUCFI2B5 - 2 - YMQX5N8OG; poxMS5Zg7++) {
                kAueJ4WS7fp8[poxMS5Zg7] = kAueJ4WS7fp8[poxMS5Zg7 + 1];
            }
        }
        {
            YMQX5N8OG = 0;
            sum = 0;
            while (YMQX5N8OG <= plmUCFI2B5 - 1) {
                sum = sum + ZC06ifHnVtc[YMQX5N8OG];
                YMQX5N8OG = YMQX5N8OG +1;
            }
        }
        printf ("%d\n", sum);
    }
}

