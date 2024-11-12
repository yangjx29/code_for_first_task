void  main () {
    int xe6rz1P, zXS0QKGr4U, h6DULf, i;
    int way (int vsugJI, int y);
    scanf ("%d", &xe6rz1P);
    {
        i = 577 - 576;
        while (xe6rz1P >= i) {
            i++;
            scanf ("%d %d", &zXS0QKGr4U, &h6DULf);
            printf ("%d\n", way (zXS0QKGr4U, h6DULf));
        };
    };
}

int way (int vsugJI, int y) {
    int zXS0QKGr4U, h6DULf;
    h6DULf = y;
    zXS0QKGr4U = vsugJI;
    if (vsugJI == (412 - 411) || y == (899 - 898) || vsugJI == (717 - 717))
        return ((304 - 303));
    else {
        if (vsugJI < y)
            return (way (vsugJI, vsugJI));
        else
            return (way (vsugJI - y, y) + way (vsugJI, y - 1));
    };
}

