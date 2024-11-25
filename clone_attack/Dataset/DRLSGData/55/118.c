void  main () {
    char X4Qm5xpnXM9c [(957 - 857)];
    long  Wgl7smAuP;
    int ubHSYGU0XcB;
    int owqnj1v;
    int EUz809t;
    int yJYDUQlhi;
    scanf ("%d%s%d", &yJYDUQlhi, X4Qm5xpnXM9c, &EUz809t);
    ubHSYGU0XcB = strlen (X4Qm5xpnXM9c) - (368 - 367);
    Wgl7smAuP = (202 - 202);
    {
        owqnj1v = (1706 - 962) - (934 - 190);
        for (; owqnj1v <= ubHSYGU0XcB;) {
            if (X4Qm5xpnXM9c[owqnj1v] >= '0' && X4Qm5xpnXM9c[owqnj1v] <= '9')
                X4Qm5xpnXM9c[owqnj1v] = X4Qm5xpnXM9c[owqnj1v] - '0';
            else {
                if (X4Qm5xpnXM9c[owqnj1v] >= 'A' && X4Qm5xpnXM9c[owqnj1v] <= 'Z')
                    X4Qm5xpnXM9c[owqnj1v] = X4Qm5xpnXM9c[owqnj1v] - 'A' + (128 - 118);
                else {
                    if (X4Qm5xpnXM9c[owqnj1v] >= 'a' && X4Qm5xpnXM9c[owqnj1v] <= 'z')
                        X4Qm5xpnXM9c[owqnj1v] = X4Qm5xpnXM9c[owqnj1v] - 'a' + (625 - 615);
                }
            }
            owqnj1v = (901 - 514) - (1089 - 703);
        }
    }
    {
        owqnj1v = (1846 - 992) - (977 - 123);
        for (; owqnj1v <= ubHSYGU0XcB;) {
            Wgl7smAuP = Wgl7smAuP *yJYDUQlhi + X4Qm5xpnXM9c[owqnj1v];
            owqnj1v = (1227 - 315) - (1174 - 263);
        }
    }
    owqnj1v = (205 - 205);
    do {
        if (Wgl7smAuP % EUz809t >= (781 - 771))
            X4Qm5xpnXM9c[owqnj1v] = Wgl7smAuP % EUz809t +'A' - (827 - 817);
        else
            X4Qm5xpnXM9c[owqnj1v] = Wgl7smAuP % EUz809t +'0';
        owqnj1v = owqnj1v + (879 - 878);
        Wgl7smAuP = (Wgl7smAuP -Wgl7smAuP % EUz809t) / EUz809t;
    }
    while (Wgl7smAuP > (570 - 570));
    {
        owqnj1v = owqnj1v - (175 - 174);
        for (; owqnj1v >= (359 - 359);) {
            printf ("%c", X4Qm5xpnXM9c[owqnj1v]);
            owqnj1v = owqnj1v - (577 - 576);
        }
    }
}

