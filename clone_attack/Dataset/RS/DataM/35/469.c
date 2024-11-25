void  main () {
    int FVF95LvkKa;
    int FVNDrk6;
    int h;
    int EyMiqUa [8] [8];
    int TSWRPDkdx;
    int n;
    int x;
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
    int p;
    scanf ("%d,%d", &TSWRPDkdx, &n);
    for (FVF95LvkKa = 0; TSWRPDkdx > FVF95LvkKa; FVF95LvkKa = FVF95LvkKa +1) {
        FVNDrk6 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > FVNDrk6) {
            scanf ("%d", &EyMiqUa[FVF95LvkKa][FVNDrk6]);
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
            FVNDrk6 = FVNDrk6 +1;
        };
    }
    {
        FVF95LvkKa = 0;
        while (FVF95LvkKa < TSWRPDkdx) {
            x = 0;
            for (FVNDrk6 = 0; n > FVNDrk6; FVNDrk6 = FVNDrk6 +1) {
                if (x < EyMiqUa[FVF95LvkKa][FVNDrk6]) {
                    x = EyMiqUa[FVF95LvkKa][FVNDrk6];
                    p = FVNDrk6;
                };
            }
            {
                h = 0;
                while (h < TSWRPDkdx) {
                    if (EyMiqUa[h][p] < x)
                        break;
                    h++;
                };
            }
            if (h == TSWRPDkdx) {
                printf ("%d+%d\n", FVF95LvkKa, p);
                break;
            }
            FVF95LvkKa++;
        };
    }
    if (FVF95LvkKa == TSWRPDkdx)
        printf ("No\n");
}

