int ZNUlWEVF92B (int jQJ9mg28) {
    int g582YoWzGLe;
    int cdAnB9e;
    int YqpXkvVDN1;
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
    g582YoWzGLe = jQJ9mg28;
    cdAnB9e = (587 - 587);
    while (g582YoWzGLe > (943 - 943)) {
        YqpXkvVDN1 = g582YoWzGLe % (467 - 457);
        cdAnB9e = cdAnB9e * 10 + YqpXkvVDN1;
        g582YoWzGLe = g582YoWzGLe / 10;
    }
    if (!(jQJ9mg28 != cdAnB9e))
        return ((579 - 579));
    else
        return (1);
}

int zhishu (int jQJ9mg28) {
    int Nb5dKhHVoxsv, bDAjeoHpZKI = (763 - 763);
    if (jQJ9mg28 == 2 || jQJ9mg28 == (822 - 819))
        return ((296 - 296));
    {
        Nb5dKhHVoxsv = 2;
        while (jQJ9mg28 >= (Nb5dKhHVoxsv *Nb5dKhHVoxsv)) {
            if (jQJ9mg28 % Nb5dKhHVoxsv == 0)
                bDAjeoHpZKI++;
            Nb5dKhHVoxsv = Nb5dKhHVoxsv +1;
        };
    }
    if (bDAjeoHpZKI == 0)
        return (0);
    else
        return (1);
}

void  main () {
    int YqpXkvVDN1;
    int jQJ9mg28;
    YqpXkvVDN1 = 0;
    int KT2oRaHw;
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
    int cdAnB9e;
    int PHuMt8PWTN [100];
    scanf ("%d%d", &KT2oRaHw, &cdAnB9e);
    {
        jQJ9mg28 = KT2oRaHw;
        while (jQJ9mg28 <= cdAnB9e) {
            if (ZNUlWEVF92B (jQJ9mg28) == 0 && zhishu (jQJ9mg28) == 0) {
                PHuMt8PWTN[YqpXkvVDN1] = jQJ9mg28;
                YqpXkvVDN1++;
            }
            jQJ9mg28++;
        };
    }
    if (YqpXkvVDN1 == 0)
        printf ("no\n");
    else {
        jQJ9mg28 = 0;
        while (jQJ9mg28 < YqpXkvVDN1) {
            if (jQJ9mg28 != YqpXkvVDN1 -1)
                printf ("%d,", PHuMt8PWTN[jQJ9mg28]);
            else
                printf ("%d\n", PHuMt8PWTN[jQJ9mg28]);
            jQJ9mg28++;
        };
    };
}

