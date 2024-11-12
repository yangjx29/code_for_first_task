int p2BZ3o6fcT (int vjJfL2g, int b) {
    int i, c = 1;
    {
        i = 0;
        while (i < b) {
            i = i + 1;
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
            c = c * (vjJfL2g);
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
    return c;
}

main () {
    char vjJfL2g [10];
    char d [10];
    char c;
    int LF2Dve [10];
    int b [10];
    int X6GP24YyVM;
    int n;
    int i;
    int ZIMlhrfXqpK;
    int aH21FAntCgb;
    int KWyT0KCO3;
    int F4R8I5Ei;
    X6GP24YyVM = 0;
    n = 0;
    i = 0;
    ZIMlhrfXqpK = 0;
    aH21FAntCgb = 0;
    KWyT0KCO3 = 0;
    F4R8I5Ei = 0;
    int s = 0;
    KWyT0KCO3 = 0;
    scanf ("%d%s%d", &X6GP24YyVM, vjJfL2g, &n);
    i = strlen (vjJfL2g);
    {
        ZIMlhrfXqpK = 0;
        while (ZIMlhrfXqpK < i) {
            if (vjJfL2g[ZIMlhrfXqpK] >= 65 && 90 >= vjJfL2g[ZIMlhrfXqpK])
                LF2Dve[ZIMlhrfXqpK] = vjJfL2g[ZIMlhrfXqpK] - 55;
            ZIMlhrfXqpK = ZIMlhrfXqpK +1;
        };
    }
    {
        ZIMlhrfXqpK = 0;
        while (ZIMlhrfXqpK < i) {
            if (vjJfL2g[ZIMlhrfXqpK] >= 97 && vjJfL2g[ZIMlhrfXqpK] <= 122)
                LF2Dve[ZIMlhrfXqpK] = vjJfL2g[ZIMlhrfXqpK] - 87;
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
            ZIMlhrfXqpK = ZIMlhrfXqpK +1;
        };
    }
    for (ZIMlhrfXqpK = 0; ZIMlhrfXqpK < i; ZIMlhrfXqpK = ZIMlhrfXqpK +1) {
        if (vjJfL2g[ZIMlhrfXqpK] >= 48 && vjJfL2g[ZIMlhrfXqpK] <= 57)
            LF2Dve[ZIMlhrfXqpK] = vjJfL2g[ZIMlhrfXqpK] - 48;
    }
    for (F4R8I5Ei = 0; F4R8I5Ei < i; F4R8I5Ei = F4R8I5Ei +1) {
        ZIMlhrfXqpK = LF2Dve[F4R8I5Ei] * p2BZ3o6fcT (X6GP24YyVM, i - F4R8I5Ei -1);
        s = s + ZIMlhrfXqpK;
    }
    if (s == 0)
        ;
    while (s >= 1) {
        b[KWyT0KCO3] = s % n;
        s = s / n;
        KWyT0KCO3 = KWyT0KCO3 +1;
    }
    KWyT0KCO3 = KWyT0KCO3 -1;
    {
        aH21FAntCgb = KWyT0KCO3;
        while (aH21FAntCgb >= 0) {
            if (b[aH21FAntCgb] > 9)
                d[aH21FAntCgb] = b[aH21FAntCgb] + 'A' - 10;
            else
                d[aH21FAntCgb] = b[aH21FAntCgb] + '0';
            aH21FAntCgb = aH21FAntCgb - 1;
        };
    }
    {
        aH21FAntCgb = KWyT0KCO3;
        while (aH21FAntCgb >= 0) {
            printf ("%c", d[aH21FAntCgb]);
            aH21FAntCgb = aH21FAntCgb - 1;
        };
    };
}

