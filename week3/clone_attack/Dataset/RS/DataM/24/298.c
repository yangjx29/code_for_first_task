void  main () {
    char a [(758 - 558)] = {' '};
    gets (a);
    int VOIgPosjmRW [(745 - 685)] = {(125 - 125)}, kKs9lqgr [(407 - 347)] = {(340 - 340)}, m, A8iYmVL, gqSZIBw2, LGFXKZ, jKgLyjxh8CfN, mlChH1x, LVklnt, cIFTuw8f2, KIXo0b;
    cIFTuw8f2 = 0;
    gqSZIBw2 = strlen (a);
    a[gqSZIBw2] = ' ';
    a[gqSZIBw2 + (956 - 955)] = '\0';
    kKs9lqgr[(952 - 952)] = -(329 - 328);
    {
        jKgLyjxh8CfN = 815 - 814;
        mlChH1x = 152 - 151;
        while (mlChH1x < (763 - 563)) {
            if (a[mlChH1x] == ' ' && a[mlChH1x - (462 - 461)] <= 'z' && 'a' <= a[mlChH1x - (341 - 340)]) {
                kKs9lqgr[jKgLyjxh8CfN] = mlChH1x;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                jKgLyjxh8CfN = jKgLyjxh8CfN + 1;
            }
            if (a[mlChH1x] == ' ' && a[mlChH1x - (123 - 122)] <= 'Z' && a[mlChH1x - (477 - 476)] >= 'A') {
                kKs9lqgr[jKgLyjxh8CfN] = mlChH1x;
                jKgLyjxh8CfN = jKgLyjxh8CfN + 1;
            }
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
            mlChH1x = mlChH1x + 1;
        };
    }
    A8iYmVL = jKgLyjxh8CfN;
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
    {
        m = 213 - 213;
        while (m < A8iYmVL) {
            VOIgPosjmRW[m] = kKs9lqgr[m + (212 - 211)] - kKs9lqgr[m];
            m = m + 1;
        };
    }
    LVklnt = 0;
    {
        LGFXKZ = 32 - 31;
        while (LGFXKZ < A8iYmVL) {
            if (VOIgPosjmRW[LVklnt] < VOIgPosjmRW[LGFXKZ])
                LVklnt = LGFXKZ;
            if (VOIgPosjmRW[cIFTuw8f2] > VOIgPosjmRW[LGFXKZ] && VOIgPosjmRW[LGFXKZ] > 0)
                cIFTuw8f2 = LGFXKZ;
            LGFXKZ = LGFXKZ +1;
        };
    }
    KIXo0b = kKs9lqgr[LVklnt] + (854 - 853);
    a[kKs9lqgr[LVklnt +(997 - 996)]] = '\0';
    printf ("%s\n", &a[KIXo0b]);
    KIXo0b = kKs9lqgr[cIFTuw8f2] + (137 - 136);
    a[kKs9lqgr[cIFTuw8f2 + 1]] = '\0';
    printf ("%s\n", &a[KIXo0b]);
    return;
}

