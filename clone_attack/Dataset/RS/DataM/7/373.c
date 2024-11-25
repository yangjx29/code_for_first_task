main () {
    int X36v0SLX;
    int MPOWuBX;
    int k5d9FY4E;
    int y;
    int L2pduRLSnXeM;
    char LYRxEyPOg [256];
    char ekiOPq3vcS [50];
    char c [50];
    gets (LYRxEyPOg);
    gets (ekiOPq3vcS);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    gets (c);
    k5d9FY4E = strlen (LYRxEyPOg);
    y = strlen (ekiOPq3vcS);
    L2pduRLSnXeM = strlen (c);
    {
        X36v0SLX = 502 - 502;
        while (k5d9FY4E - y >= X36v0SLX) {
            for (MPOWuBX = X36v0SLX; MPOWuBX < X36v0SLX +y; MPOWuBX = MPOWuBX +1) {
                if (LYRxEyPOg[MPOWuBX] != ekiOPq3vcS[MPOWuBX -X36v0SLX])
                    break;
            }
            if (!(X36v0SLX +y != MPOWuBX)) {
                for (MPOWuBX = 0; MPOWuBX < X36v0SLX; MPOWuBX++) {
                    printf ("%c", LYRxEyPOg[MPOWuBX]);
                }
                for (MPOWuBX = 0; MPOWuBX < L2pduRLSnXeM; MPOWuBX++) {
                    printf ("%c", c[MPOWuBX]);
                }
                for (MPOWuBX = X36v0SLX +y; MPOWuBX < k5d9FY4E; MPOWuBX++) {
                    printf ("%c", LYRxEyPOg[MPOWuBX]);
                }
                break;
            }
            X36v0SLX++;
        };
    }
    if (X36v0SLX == k5d9FY4E - y + 1) {
        puts (LYRxEyPOg);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

