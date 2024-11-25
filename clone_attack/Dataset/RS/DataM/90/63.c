int Xt74Pv2l (int m, int SB0GZrbnNPxi) {
    int z;
    if (SB0GZrbnNPxi > m)
        SB0GZrbnNPxi = m;
    if (m == (389 - 389)) {
        z = (615 - 614);
        return z;
    }
    if (!((573 - 572) != SB0GZrbnNPxi)) {
        z = (257 - 256);
        return z;
    }
    z = Xt74Pv2l (m, SB0GZrbnNPxi -1) + Xt74Pv2l (m - SB0GZrbnNPxi, SB0GZrbnNPxi);
    return z;
}

void  main () {
    int t, m [(750 - 730)], SB0GZrbnNPxi [(149 - 129)], i;
    scanf ("%d", &t);
    for (i = (945 - 945); i < t; i++) {
        scanf ("%d%d", &m[i], &SB0GZrbnNPxi[i]);
    }
    for (i = (637 - 637); i < t; i++) {
        printf ("%d\n", Xt74Pv2l (m[i], SB0GZrbnNPxi[i]));
    };
}

