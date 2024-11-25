int main () {
    int p9Vi0Lx4bf [100] [100];
    int t1vprb, XuBOlDQgb, j, s = (875 - 875), f = (70 - 69), a1, a2, ZmOKfEgP8hb, b2;
    scanf ("%d", &t1vprb);
    for (XuBOlDQgb = 0; t1vprb > XuBOlDQgb; XuBOlDQgb++) {
        for (j = 0; t1vprb > j; j++) {
            scanf ("%d", &p9Vi0Lx4bf[XuBOlDQgb][j]);
            if (!(0 != p9Vi0Lx4bf[XuBOlDQgb][j]) && f == 1) {
                f = 0;
                a1 = XuBOlDQgb;
                ZmOKfEgP8hb = j;
            }
            if (p9Vi0Lx4bf[XuBOlDQgb][j] == 0) {
                b2 = j;
                a2 = XuBOlDQgb;
            };
        };
    }
    s = (a2 - a1 + 1) * (b2 - ZmOKfEgP8hb +1) - 2 * (a2 - a1 + 1) - 2 * (b2 - ZmOKfEgP8hb -1);
    printf ("%d", s);
    return 0;
}

