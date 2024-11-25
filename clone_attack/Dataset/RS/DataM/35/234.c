void  main () {
    int J8egTzoI79w, c, GNBsunLkSIc [(704 - 696)] [(104 - 96)], N0BMNxh, K25QZSz, max [(763 - 755)];
    scanf ("%d,%d", &J8egTzoI79w, &c);
    {
        N0BMNxh = 704 - 704;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N0BMNxh < J8egTzoI79w) {
            {
                K25QZSz = 443 - 443;
                while (K25QZSz < c) {
                    scanf ("%d", &GNBsunLkSIc[N0BMNxh][K25QZSz]);
                    K25QZSz = K25QZSz +1;
                };
            }
            N0BMNxh = N0BMNxh +1;
        };
    }
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
    for (N0BMNxh = (946 - 946); N0BMNxh < J8egTzoI79w; N0BMNxh = N0BMNxh +1) {
        max[N0BMNxh] = (604 - 604);
        {
            K25QZSz = 155 - 154;
            while (K25QZSz < c) {
                if (GNBsunLkSIc[N0BMNxh][max[N0BMNxh]] < GNBsunLkSIc[N0BMNxh][K25QZSz])
                    max[N0BMNxh] = K25QZSz;
                K25QZSz++;
            };
        };
    }
    printf ("No");
    {
        N0BMNxh = 486 - 486;
        while (N0BMNxh < J8egTzoI79w) {
            for (K25QZSz = (572 - 572); J8egTzoI79w > K25QZSz; K25QZSz = K25QZSz +1)
                if (GNBsunLkSIc[N0BMNxh][max[N0BMNxh]] > GNBsunLkSIc[K25QZSz][max[N0BMNxh]])
                    break;
            if (K25QZSz >= J8egTzoI79w) {
                printf ("%d+%d", N0BMNxh, max[N0BMNxh]);
                return;
            }
            N0BMNxh++;
        };
    };
}

