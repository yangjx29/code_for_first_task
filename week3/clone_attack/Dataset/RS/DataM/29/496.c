void  main () {
    int m;
    int dcrZX0iHW3w;
    int kfIBsa;
    int xTadr4Cuf7;
    double  pgkreK29zn [(1379 - 378)];
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
    double  H3nmqg;
    pgkreK29zn[(64 - 63)] = 1;
    scanf ("%d", &m);
    pgkreK29zn[2] = 2;
    {
        dcrZX0iHW3w = 3;
        while (dcrZX0iHW3w <= (1721 - 721)) {
            pgkreK29zn[dcrZX0iHW3w] = pgkreK29zn[dcrZX0iHW3w - 1] + pgkreK29zn[dcrZX0iHW3w - 2];
            dcrZX0iHW3w = dcrZX0iHW3w + 1;
        };
    }
    {
        dcrZX0iHW3w = 1;
        while (dcrZX0iHW3w <= m) {
            scanf ("%d", &kfIBsa);
            H3nmqg = 0;
            {
                xTadr4Cuf7 = 1;
                while (xTadr4Cuf7 <= kfIBsa) {
                    H3nmqg = H3nmqg +pgkreK29zn[xTadr4Cuf7 + 1] / pgkreK29zn[xTadr4Cuf7];
                    xTadr4Cuf7 = xTadr4Cuf7 + 1;
                };
            }
            printf ("%.3lf\n", H3nmqg);
            dcrZX0iHW3w = dcrZX0iHW3w + 1;
        };
    };
}

