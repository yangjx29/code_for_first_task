void  main () {
    int col, nG2C0BuLPIJ, ZDeGAsgr, RF0ptmWndR, n, a [101] [101], Ndq6KB4jCse;
    scanf ("%d%d", &nG2C0BuLPIJ, &col);
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
    for (ZDeGAsgr = 0; ZDeGAsgr < nG2C0BuLPIJ; ZDeGAsgr++) {
        RF0ptmWndR = 0;
        while (col > RF0ptmWndR) {
            scanf ("%d", &a[ZDeGAsgr][RF0ptmWndR]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            RF0ptmWndR++;
        };
    }
    scanf ("%d", &Ndq6KB4jCse);
    {
        ZDeGAsgr = 0;
        while (nG2C0BuLPIJ + col - 2 >= ZDeGAsgr) {
            {
                RF0ptmWndR = 0;
                while (ZDeGAsgr >= RF0ptmWndR) {
                    if (RF0ptmWndR < nG2C0BuLPIJ && (ZDeGAsgr -RF0ptmWndR) < col)
                        printf ("%d\n", a[RF0ptmWndR][ZDeGAsgr -RF0ptmWndR]);
                    RF0ptmWndR++;
                };
            }
            ZDeGAsgr++;
        };
    };
}

