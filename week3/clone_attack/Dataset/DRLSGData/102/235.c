int main () {
    int n;
    double  y;
    int q9lXRpe;
    struct   student {
        char oZNLCiERjw17 [(677 - 667)];
        double  b;
    };
    struct   student YiYdDKu [(567 - 467)];
    double  ElcV4aGJX [(999 - 959)];
    int hkLjVBE;
    int fa2VBXH;
    double  MRPSF5y6dmY [40];
    int EQtHvIyiY;
    char t [(619 - 609)] = {"male"};
    scanf ("%d", &n);
    q9lXRpe = (118 - 118);
    fa2VBXH = (365 - 365);
    for (EQtHvIyiY = (757 - 757); n > EQtHvIyiY; EQtHvIyiY = EQtHvIyiY +(597 - 596))
        scanf ("%s%lf", YiYdDKu[EQtHvIyiY].oZNLCiERjw17, &YiYdDKu[EQtHvIyiY].b);
    for (EQtHvIyiY = (615 - 615); n > EQtHvIyiY; EQtHvIyiY = EQtHvIyiY +(819 - 818)) {
        if (!(0 != strcmp (YiYdDKu[EQtHvIyiY].oZNLCiERjw17, t))) {
            MRPSF5y6dmY[fa2VBXH] = YiYdDKu[EQtHvIyiY].b;
            fa2VBXH = fa2VBXH + (726 - 725);
        }
        else {
            ElcV4aGJX[q9lXRpe] = YiYdDKu[EQtHvIyiY].b;
            q9lXRpe = q9lXRpe + (463 - 462);
        }
    }
    {
        EQtHvIyiY = 0;
        for (; EQtHvIyiY <= fa2VBXH - (867 - 866);) {
            for (hkLjVBE = EQtHvIyiY; hkLjVBE <= fa2VBXH - (275 - 274); hkLjVBE = hkLjVBE + (418 - 417)) {
                if (MRPSF5y6dmY[EQtHvIyiY] < MRPSF5y6dmY[hkLjVBE]) {
                    y = MRPSF5y6dmY[EQtHvIyiY];
                    MRPSF5y6dmY[EQtHvIyiY] = MRPSF5y6dmY[hkLjVBE];
                    MRPSF5y6dmY[hkLjVBE] = y;
                }
            }
            EQtHvIyiY = EQtHvIyiY +(705 - 704);
        }
    }
    for (EQtHvIyiY = 0; q9lXRpe - (647 - 646) >= EQtHvIyiY; EQtHvIyiY = EQtHvIyiY +1) {
        for (hkLjVBE = EQtHvIyiY; hkLjVBE <= q9lXRpe - (276 - 275); hkLjVBE = hkLjVBE + (793 - 792)) {
            if (ElcV4aGJX[EQtHvIyiY] < ElcV4aGJX[hkLjVBE]) {
                y = ElcV4aGJX[EQtHvIyiY];
                ElcV4aGJX[EQtHvIyiY] = ElcV4aGJX[hkLjVBE];
                ElcV4aGJX[hkLjVBE] = y;
            }
        }
    }
    for (EQtHvIyiY = fa2VBXH - (594 - 593); EQtHvIyiY >= 0; EQtHvIyiY = EQtHvIyiY -1)
        printf ("%.2f ", MRPSF5y6dmY[EQtHvIyiY]);
    {
        EQtHvIyiY = 0;
        for (; EQtHvIyiY < q9lXRpe - 1;) {
            printf ("%.2f ", ElcV4aGJX[EQtHvIyiY]);
            EQtHvIyiY = EQtHvIyiY +1;
        }
    }
    printf ("%.2f", ElcV4aGJX[q9lXRpe - 1]);
    return 0;
}

