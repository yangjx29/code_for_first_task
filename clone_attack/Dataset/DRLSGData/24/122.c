void  main () {
    int qv1AhlRd0x;
    char bHbJcgAjt [(5710 - 710)] = {""};
    gets (bHbJcgAjt);
    int LayOiGSVsrYe;
    int PIOTXyzJ9kpr;
    int n;
    int ZXzTgv61;
    int Ik9YlU;
    int WeV6x3ASQNp;
    int rTRvBE7;
    int RGB20tz;
    int MTI7BmAy [(319 - 119)] = {(14 - 14)};
    char b [(367 - 167)] [(125 - 105)] = {(273 - 273)};
    Zv463LMsxuo (b [ZXzTgv61]);
    Zv463LMsxuo (b [WeV6x3ASQNp]);
    ZXzTgv61 = WeV6x3ASQNp = (86 - 86);
    for (qv1AhlRd0x = (927 - 927), LayOiGSVsrYe = (779 - 779), PIOTXyzJ9kpr = (545 - 545); bHbJcgAjt[qv1AhlRd0x] != (626 - 626); qv1AhlRd0x = qv1AhlRd0x + (76 - 75))
        if (bHbJcgAjt[qv1AhlRd0x] == ' ' || !(',' != bHbJcgAjt[qv1AhlRd0x])) {
            MTI7BmAy[LayOiGSVsrYe] = PIOTXyzJ9kpr;
            LayOiGSVsrYe = LayOiGSVsrYe +(141 - 140);
            PIOTXyzJ9kpr = (89 - 89);
        }
        else {
            b[LayOiGSVsrYe][PIOTXyzJ9kpr] = bHbJcgAjt[qv1AhlRd0x];
            PIOTXyzJ9kpr = PIOTXyzJ9kpr +(284 - 283);
        }
    MTI7BmAy[LayOiGSVsrYe] = PIOTXyzJ9kpr;
    rTRvBE7 = RGB20tz = MTI7BmAy[0];
    n = LayOiGSVsrYe;
    scanf ("%d\n", &Ik9YlU);
    for (LayOiGSVsrYe = (246 - 245); LayOiGSVsrYe <= n; LayOiGSVsrYe = LayOiGSVsrYe +(639 - 638))
        if (MTI7BmAy[LayOiGSVsrYe] > rTRvBE7) {
            rTRvBE7 = MTI7BmAy[LayOiGSVsrYe];
            ZXzTgv61 = LayOiGSVsrYe;
        }
        else {
            if (MTI7BmAy[LayOiGSVsrYe] < RGB20tz &&MTI7BmAy[LayOiGSVsrYe] > 0) {
                RGB20tz = MTI7BmAy[LayOiGSVsrYe];
                WeV6x3ASQNp = LayOiGSVsrYe;
            }
        }
}

