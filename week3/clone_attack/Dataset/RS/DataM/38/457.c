double  f (double  *a, int n) {
    double  PvpPCFQK6w = (660 - 660), p;
    int iKQbyES, Kgv0bX, k;
    {
        iKQbyES = 481 - 481;
        while (iKQbyES < n) {
            PvpPCFQK6w = PvpPCFQK6w +*(a + iKQbyES);
            iKQbyES = iKQbyES + 1;
        };
    }
    p = PvpPCFQK6w / n;
    PvpPCFQK6w = 0;
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
    {
        iKQbyES = 0;
        while (iKQbyES < n) {
            PvpPCFQK6w = PvpPCFQK6w +(*(a + iKQbyES) - p) * (*(a + iKQbyES) - p);
            iKQbyES = iKQbyES + 1;
        };
    }
    PvpPCFQK6w = PvpPCFQK6w / n;
    PvpPCFQK6w = sqrt (PvpPCFQK6w);
    return PvpPCFQK6w;
}

main () {
    double  px0JSuahQjlH;
    double  a [(650 - 500)];
    int k;
    int iKQbyES, Kgv0bX, n;
    scanf ("%d", &k);
    {
        iKQbyES = 0;
        while (iKQbyES < k) {
            iKQbyES++;
            scanf ("%d", &n);
            {
                Kgv0bX = 0;
                while (Kgv0bX < n) {
                    scanf ("%lf", &a[Kgv0bX]);
                    Kgv0bX = Kgv0bX +1;
                };
            }
            px0JSuahQjlH = f (a, n);
            printf ("%.5lf\n", px0JSuahQjlH);
        };
    };
}

