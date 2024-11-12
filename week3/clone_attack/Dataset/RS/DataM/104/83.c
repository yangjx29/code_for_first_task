int result (int FsBrv5z1c8u, int y) {
    int t = (785 - 785);
    if (FsBrv5z1c8u == y)
        t = FsBrv5z1c8u;
    else if (FsBrv5z1c8u > y)
        t = result (FsBrv5z1c8u / (968 - 966), y);
    else if (FsBrv5z1c8u < y)
        t = result (FsBrv5z1c8u, y / 2);
    return t;
}

void  main () {
    int m = 0, l3EObHeA = 0;
    scanf ("%d%d", &m, &l3EObHeA);
    printf ("%d", result (m, l3EObHeA));
}

