void  OzhIMdeNYiXT (int paRfOnWxg [], int *YERjc0TA, int y [], int *YNz5LZEgqXCv) {
    int yavBPbNqcis;
    scanf ("%d %d", YERjc0TA, YNz5LZEgqXCv);
    {
        yavBPbNqcis = 0;
        while (*YERjc0TA > yavBPbNqcis) {
            scanf ("%d", &paRfOnWxg[yavBPbNqcis]);
            yavBPbNqcis = yavBPbNqcis + 1;
        };
    }
    {
        yavBPbNqcis = 0;
        while (*YNz5LZEgqXCv > yavBPbNqcis) {
            scanf ("%d", &y[yavBPbNqcis]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            yavBPbNqcis = yavBPbNqcis + 1;
        };
    };
}

void  Aat02srO4 (int paRfOnWxg [], int eyGlTvJpoPDV) {
    int yavBPbNqcis, kGVnb1X4HPu;
    {
        yavBPbNqcis = 131 - 130;
        while (1 <= yavBPbNqcis) {
            {
                kGVnb1X4HPu = 1;
                while (yavBPbNqcis >= kGVnb1X4HPu) {
                    if (paRfOnWxg[kGVnb1X4HPu - 1] > paRfOnWxg[kGVnb1X4HPu]) {
                        int temp = paRfOnWxg[kGVnb1X4HPu - 1];
                        paRfOnWxg[kGVnb1X4HPu - 1] = paRfOnWxg[kGVnb1X4HPu];
                        paRfOnWxg[kGVnb1X4HPu] = temp;
                    }
                    kGVnb1X4HPu = kGVnb1X4HPu + 1;
                };
            }
            yavBPbNqcis = yavBPbNqcis - 1;
        };
    };
}

void  M5akJqz8IN (int a [], int b [], int R70VD6Gm2nj, int nb) {
    int yavBPbNqcis;
    {
        yavBPbNqcis = R70VD6Gm2nj;
        while (yavBPbNqcis < R70VD6Gm2nj +nb) {
            a[yavBPbNqcis] = b[yavBPbNqcis - R70VD6Gm2nj];
            yavBPbNqcis = yavBPbNqcis + 1;
        };
    };
}

void  print (int a [], int R70VD6Gm2nj, int nb) {
    int yavBPbNqcis;
    printf ("%d", a[0]);
    {
        yavBPbNqcis = 1;
        while (yavBPbNqcis < R70VD6Gm2nj +nb) {
            printf (" %d", a[yavBPbNqcis]);
            yavBPbNqcis = yavBPbNqcis + 1;
        };
    };
}

void  main () {
    int a [100], R70VD6Gm2nj, b [100], nb;
    OzhIMdeNYiXT (a, &R70VD6Gm2nj, b, &nb);
    Aat02srO4 (b, nb);
    Aat02srO4 (a, R70VD6Gm2nj);
    M5akJqz8IN (a, b, R70VD6Gm2nj, nb);
    print (a, R70VD6Gm2nj, nb);
}

