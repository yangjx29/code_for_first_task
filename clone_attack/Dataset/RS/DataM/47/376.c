void  main () {
    int Utf8rdKBZ0wW;
    int locvLDAtl [(257 - 157)];
    int b [100];
    int SmpZ2VE;
    int VdL70Xyaq;
    int LymuK7C;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &Utf8rdKBZ0wW);
    {
        SmpZ2VE = 377 - 376;
        while (Utf8rdKBZ0wW >= SmpZ2VE) {
            scanf ("%d", &LymuK7C);
            locvLDAtl[Utf8rdKBZ0wW +1 - SmpZ2VE] = LymuK7C;
            SmpZ2VE++;
        };
    }
    for (VdL70Xyaq = 1; VdL70Xyaq <= Utf8rdKBZ0wW -1; VdL70Xyaq++) {
        printf ("%d ", locvLDAtl[VdL70Xyaq]);
    }
    printf ("%d", locvLDAtl[Utf8rdKBZ0wW]);
}

