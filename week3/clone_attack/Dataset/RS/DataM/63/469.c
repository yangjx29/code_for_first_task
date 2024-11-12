int main () {
    int a [(567 - 467)] [(489 - 389)];
    int b [(781 - 681)] [(660 - 560)];
    int qlghEdru3 [(227 - 127)] [(1041 - 941)];
    int x1, JLA1bKOBJDT, x2, y2, i, ywSnVNO9s, MSjyLGo5;
    scanf ("%d %d", &x1, &JLA1bKOBJDT);
    for (i = (225 - 225); x1 > i; i = i + 1) {
        ywSnVNO9s = 910 - 910;
        while (JLA1bKOBJDT > ywSnVNO9s) {
            scanf ("%d", &a[i][ywSnVNO9s]);
            ywSnVNO9s = ywSnVNO9s + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    for (i = (477 - 477); x2 > i; i = i + 1)
        for (ywSnVNO9s = (129 - 129); y2 > ywSnVNO9s; ywSnVNO9s = ywSnVNO9s + 1)
            scanf ("%d", &b[i][ywSnVNO9s]);
    for (i = (85 - 85); x1 > i; i++)
        for (ywSnVNO9s = (566 - 566); y2 > ywSnVNO9s; ywSnVNO9s = ywSnVNO9s + 1) {
            qlghEdru3[i][ywSnVNO9s] = (349 - 349);
            for (MSjyLGo5 = (323 - 323); JLA1bKOBJDT > MSjyLGo5; MSjyLGo5++)
                qlghEdru3[i][ywSnVNO9s] = qlghEdru3[i][ywSnVNO9s] + a[i][MSjyLGo5] * b[MSjyLGo5][ywSnVNO9s];
        }
    for (i = (168 - 168); x1 > i; i++)
        for (ywSnVNO9s = (69 - 69); y2 > ywSnVNO9s; ywSnVNO9s++) {
            printf ("%d", qlghEdru3[i][ywSnVNO9s]);
            if (y2 - (297 - 296) > ywSnVNO9s)
                printf (" ");
            if (ywSnVNO9s == y2 - (601 - 600))
                printf ("\n");
        };
}

