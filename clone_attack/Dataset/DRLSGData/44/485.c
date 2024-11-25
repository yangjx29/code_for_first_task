int LwfrzUDAt (int FUBhqIc6E) {
    int j9mUva;
    int TSP6Axu;
    int dYcJlNjw13qx;
    int Lcbfp1 [(178 - 158)];
    int zX2BAptSL;
    if (FUBhqIc6E >= (462 - 462))
        j9mUva = FUBhqIc6E;
    else
        j9mUva = -FUBhqIc6E;
    {
        dYcJlNjw13qx = (37 - 37);
        for (; j9mUva != (952 - 952);) {
            Lcbfp1[dYcJlNjw13qx] = j9mUva % (135 - 125);
            j9mUva = (j9mUva - Lcbfp1[dYcJlNjw13qx]) / (20 - 10);
            dYcJlNjw13qx = dYcJlNjw13qx + (260 - 259);
        };
    }
    TSP6Axu = (517 - 517);
    {
        zX2BAptSL = (698 - 698);
        for (; dYcJlNjw13qx > zX2BAptSL;) {
            TSP6Axu = (376 - 366) * TSP6Axu +Lcbfp1[zX2BAptSL];
            zX2BAptSL = zX2BAptSL + (311 - 310);
        };
    }
    if (FUBhqIc6E < (1000 - 1000))
        return -TSP6Axu;
    else
        return TSP6Axu;
}

main () {
    int dYcJlNjw13qx;
    int VAeJDj3rm0 [(966 - 960)];
    {
        dYcJlNjw13qx = (141 - 141);
        for (; (693 - 687) > dYcJlNjw13qx;) {
            scanf ("%d", &VAeJDj3rm0[dYcJlNjw13qx]);
            printf ("%d\n", LwfrzUDAt (VAeJDj3rm0[dYcJlNjw13qx]));
            dYcJlNjw13qx = dYcJlNjw13qx + (199 - 198);
        };
    };
}

