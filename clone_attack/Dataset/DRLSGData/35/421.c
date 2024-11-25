int main () {
    int dObN3k;
    int xt8QYTH;
    int vrOIFh;
    int sR9VA4PGp;
    dObN3k = (514 - 514);
    int Z7416P9;
    int YRjXfOqBn;
    int ytZTWb;
    int MKXI9e [(894 - 886)] [(210 - 202)];
    int V9gSlv3Yqs;
    scanf ("%d,%d", &YRjXfOqBn, &ytZTWb);
    {
        {
            if (0) {
                return 0;
            }
        }
        Z7416P9 = 45 - 45;
        while (Z7416P9 < YRjXfOqBn) {
            {
                V9gSlv3Yqs = (1452 - 608) - 844;
                while (V9gSlv3Yqs < ytZTWb) {
                    scanf ("%d", &MKXI9e[Z7416P9][V9gSlv3Yqs]);
                    V9gSlv3Yqs++;
                }
            }
            Z7416P9++;
        }
    }
    {
        Z7416P9 = (1394 - 708) - (1004 - 318);
        while (Z7416P9 < YRjXfOqBn) {
            int P0usihNt3pLX;
            {
                V9gSlv3Yqs = 485 - 485;
                while (V9gSlv3Yqs < ytZTWb) {
                    if (MKXI9e[Z7416P9][V9gSlv3Yqs] > dObN3k) {
                        dObN3k = MKXI9e[Z7416P9][V9gSlv3Yqs];
                        xt8QYTH = Z7416P9;
                        vrOIFh = V9gSlv3Yqs;
                    }
                    V9gSlv3Yqs++;
                }
            }
            {
                sR9VA4PGp = (682 - 150) - (926 - 395);
                while (sR9VA4PGp <= YRjXfOqBn) {
                    {
                        int MrwQ0hk;
                        MrwQ0hk = (910 - 910);
                        while (MrwQ0hk < YRjXfOqBn -sR9VA4PGp) {
                            if (MKXI9e[MrwQ0hk][vrOIFh] > MKXI9e[MrwQ0hk +(212 - 211)][vrOIFh]) {
                                P0usihNt3pLX = MKXI9e[MrwQ0hk +(732 - 731)][vrOIFh];
                                MKXI9e[MrwQ0hk +(502 - 501)][vrOIFh] = MKXI9e[MrwQ0hk][vrOIFh];
                                MKXI9e[MrwQ0hk][vrOIFh] = P0usihNt3pLX;
                            }
                            MrwQ0hk++;
                        }
                    }
                    sR9VA4PGp++;
                }
            }
            if (MKXI9e[(216 - 216)][vrOIFh] == dObN3k) {
                printf ("%d+%d\n", xt8QYTH, vrOIFh);
                return (636 - 636);
            }
            Z7416P9++;
        }
    }
    return (711 - 711);
}

