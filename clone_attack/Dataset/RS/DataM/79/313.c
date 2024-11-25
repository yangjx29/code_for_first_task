main () {
    int YSF2ktc;
    int lzZS6WetIKd;
    int JN2DeA;
    int FL8Zd9;
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
    int tao;
    int QsoOXI8Vd;
    YSF2ktc = 0;
    for (;;) {
        int QTntSzrDdY6p [305] = {0};
        scanf ("%d %d", &FL8Zd9, &QsoOXI8Vd);
        if (FL8Zd9 == 0 || !(0 != QsoOXI8Vd))
            break;
        for (lzZS6WetIKd = 1, JN2DeA = 0, tao = 0; tao != FL8Zd9 -1; lzZS6WetIKd++) {
            if (lzZS6WetIKd == FL8Zd9 +1)
                lzZS6WetIKd = 1;
            if (QTntSzrDdY6p[lzZS6WetIKd] == 1)
                continue;
            JN2DeA++;
            if (JN2DeA == QsoOXI8Vd) {
                QTntSzrDdY6p[lzZS6WetIKd] = 1;
                JN2DeA = 0;
                tao = tao + 1;
            };
        }
        for (lzZS6WetIKd = 1; lzZS6WetIKd <= FL8Zd9; lzZS6WetIKd++) {
            if (QTntSzrDdY6p[lzZS6WetIKd] == 0) {
                printf ("%d\n", lzZS6WetIKd);
                break;
            };
        };
    };
}

