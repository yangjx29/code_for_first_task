void  main () {
    float II1NFGVimx6y [45];
    float x;
    float r9jsyr21IC;
    int UP89tCgF4GsX [(413 - 403)];
    int b [(108 - 98)];
    int c [10];
    int p [(426 - 381)];
    int nIDsER3GZ [(697 - 652)];
    int QlHgpfWIw, kT81idp, YtuXHiYjfl, k, j2c1Lif, NZljnp;
    {
        if ((74 - 74)) {
            return (565 - 565);
        };
    }
    k = (423 - 423);
    scanf ("%d", &QlHgpfWIw);
    {
        kT81idp = 0;
        while (kT81idp < QlHgpfWIw) {
            scanf ("%d%d%d", &UP89tCgF4GsX[kT81idp], &b[kT81idp], &c[kT81idp]);
            kT81idp = kT81idp + (572 - 571);
        };
    }
    {
        kT81idp = 0;
        while (kT81idp < QlHgpfWIw -(142 - 141)) {
            {
                YtuXHiYjfl = kT81idp + (582 - 581);
                while (QlHgpfWIw > YtuXHiYjfl) {
                    x = (UP89tCgF4GsX[kT81idp] - UP89tCgF4GsX[YtuXHiYjfl]) * (UP89tCgF4GsX[kT81idp] - UP89tCgF4GsX[YtuXHiYjfl]) + (b[kT81idp] - b[YtuXHiYjfl]) * (b[kT81idp] - b[YtuXHiYjfl]) + (c[kT81idp] - c[YtuXHiYjfl]) * (c[kT81idp] - c[YtuXHiYjfl]);
                    p[k] = kT81idp;
                    nIDsER3GZ[k] = YtuXHiYjfl;
                    YtuXHiYjfl = YtuXHiYjfl +(473 - 472);
                    II1NFGVimx6y[k] = sqrt (x);
                    k = k + (317 - 316);
                };
            }
            kT81idp = kT81idp + (38 - 37);
        };
    }
    {
        kT81idp = k - (679 - 678);
        while (0 <= kT81idp) {
            {
                YtuXHiYjfl = k - (680 - 679);
                while (k - kT81idp - (346 - 345) <= YtuXHiYjfl) {
                    if (II1NFGVimx6y[YtuXHiYjfl +(432 - 431)] > II1NFGVimx6y[YtuXHiYjfl]) {
                        r9jsyr21IC = II1NFGVimx6y[YtuXHiYjfl];
                        II1NFGVimx6y[YtuXHiYjfl] = II1NFGVimx6y[YtuXHiYjfl +(13 - 12)];
                        j2c1Lif = p[YtuXHiYjfl];
                        p[YtuXHiYjfl] = p[YtuXHiYjfl +(504 - 503)];
                        NZljnp = nIDsER3GZ[YtuXHiYjfl];
                        nIDsER3GZ[YtuXHiYjfl] = nIDsER3GZ[YtuXHiYjfl +(591 - 590)];
                        nIDsER3GZ[YtuXHiYjfl +1] = NZljnp;
                        II1NFGVimx6y[YtuXHiYjfl +1] = r9jsyr21IC;
                        p[YtuXHiYjfl +1] = j2c1Lif;
                    }
                    YtuXHiYjfl = YtuXHiYjfl -1;
                };
            }
            kT81idp = kT81idp - 1;
        };
    }
    {
        kT81idp = 0;
        while (kT81idp < k) {
            j2c1Lif = p[kT81idp];
            NZljnp = nIDsER3GZ[kT81idp];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", UP89tCgF4GsX[j2c1Lif], b[j2c1Lif], c[j2c1Lif], UP89tCgF4GsX[NZljnp], b[NZljnp], c[NZljnp], II1NFGVimx6y[kT81idp]);
            kT81idp = kT81idp + 1;
        };
    };
}

