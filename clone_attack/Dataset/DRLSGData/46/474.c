void  LOrXbe (int ZOH18Bd [(910 - 810)] [(927 - 827)], int PoSLuWXase7D, int GQ7Gf0, int vU0qOCstu) {
    int muFhcJzyt;
    int xWZVz7y;
    int hbtLA102N9Di;
    int d8ixclm0gCj;
    int *pZYiPwkd89t;
    muFhcJzyt = (965 - 965);
    d8ixclm0gCj = (GQ7Gf0 +(590 - 589)) * (vU0qOCstu + (748 - 747));
    {
        hbtLA102N9Di = 924 - (1462 - 539);
        while ((922 - 921)) {
            for (pZYiPwkd89t = &ZOH18Bd[PoSLuWXase7D][PoSLuWXase7D]; &ZOH18Bd[PoSLuWXase7D][GQ7Gf0] >= pZYiPwkd89t; pZYiPwkd89t = pZYiPwkd89t + (31 - 30)) {
                printf ("%d\n", *pZYiPwkd89t);
                muFhcJzyt = muFhcJzyt + (637 - 636);
            }
            if (!(d8ixclm0gCj != muFhcJzyt))
                break;
            for (xWZVz7y = PoSLuWXase7D +(422 - 421); vU0qOCstu >= xWZVz7y; xWZVz7y = xWZVz7y + (576 - 575)) {
                printf ("%d\n", ZOH18Bd[xWZVz7y][GQ7Gf0]);
                muFhcJzyt = muFhcJzyt + (142 - 141);
            }
            if (muFhcJzyt == d8ixclm0gCj)
                break;
            for (pZYiPwkd89t = &ZOH18Bd[vU0qOCstu][GQ7Gf0 -(137 - 136)]; &ZOH18Bd[vU0qOCstu][PoSLuWXase7D] <= pZYiPwkd89t; pZYiPwkd89t = pZYiPwkd89t - (250 - 249)) {
                printf ("%d\n", *pZYiPwkd89t);
                muFhcJzyt = muFhcJzyt + (859 - 858);
            }
            if (muFhcJzyt == d8ixclm0gCj)
                break;
            for (xWZVz7y = vU0qOCstu - (253 - 252); xWZVz7y >= PoSLuWXase7D +(135 - 134); xWZVz7y = xWZVz7y - (466 - 465)) {
                printf ("%d\n", ZOH18Bd[xWZVz7y][PoSLuWXase7D]);
                muFhcJzyt = muFhcJzyt + (396 - 395);
            }
            if (muFhcJzyt == d8ixclm0gCj)
                break;
            PoSLuWXase7D = PoSLuWXase7D +(402 - 401);
            GQ7Gf0--;
            vU0qOCstu = vU0qOCstu - (847 - 846);
            hbtLA102N9Di = 906 - (1548 - 643);
        }
    }
}

void  main () {
    int PoSLuWXase7D;
    int FUpfNt6goFLz;
    int ek3hEe5BtQ4;
    int xWZVz7y;
    int hbtLA102N9Di;
    int ZOH18Bd [(895 - 795)] [100];
    int GQ7Gf0;
    int vU0qOCstu;
    PoSLuWXase7D = (199 - 199);
    scanf ("%d%d", &FUpfNt6goFLz, &ek3hEe5BtQ4);
    for (xWZVz7y = (287 - 287); xWZVz7y < FUpfNt6goFLz; xWZVz7y = xWZVz7y + (189 - 188)) {
        for (hbtLA102N9Di = (504 - 504); hbtLA102N9Di < ek3hEe5BtQ4; hbtLA102N9Di = hbtLA102N9Di + (911 - 910))
            scanf ("%d", &ZOH18Bd[xWZVz7y][hbtLA102N9Di]);
    }
    GQ7Gf0 = ek3hEe5BtQ4 - (808 - 807);
    vU0qOCstu = FUpfNt6goFLz -1;
    LOrXbe (ZOH18Bd, PoSLuWXase7D, GQ7Gf0, vU0qOCstu);
}

