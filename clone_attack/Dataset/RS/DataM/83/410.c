void  main () {
    double  xh1FHp, TYhP7ZXqfNdJ, ptnTZl;
    int x7TOv5t, eBKyq8zAEcOX, PhtYLyKM;
    double  c4pfVy [10];
    double  XU96JP8QxDsm [10];
    double  Ao4bi5hN3H2 [10];
    scanf ("%d", &x7TOv5t);
    TYhP7ZXqfNdJ = 0;
    xh1FHp = 0;
    {
        eBKyq8zAEcOX = 1;
        while (eBKyq8zAEcOX <= x7TOv5t) {
            scanf ("%lf ", &Ao4bi5hN3H2[eBKyq8zAEcOX - 1]);
            eBKyq8zAEcOX = eBKyq8zAEcOX + 1;
        };
    }
    for (PhtYLyKM = 1; PhtYLyKM <= x7TOv5t; PhtYLyKM = PhtYLyKM +1)
        scanf ("%lf ", &XU96JP8QxDsm[PhtYLyKM -1]);
    {
        eBKyq8zAEcOX = 0;
        while (x7TOv5t - 1 >= eBKyq8zAEcOX) {
            if (XU96JP8QxDsm[eBKyq8zAEcOX] >= 90)
                c4pfVy[eBKyq8zAEcOX] = (401.0 - 397.0);
            else if (XU96JP8QxDsm[eBKyq8zAEcOX] >= 85)
                c4pfVy[eBKyq8zAEcOX] = 3.7;
            else if (XU96JP8QxDsm[eBKyq8zAEcOX] >= 82)
                c4pfVy[eBKyq8zAEcOX] = 3.3;
            else if (XU96JP8QxDsm[eBKyq8zAEcOX] >= 78)
                c4pfVy[eBKyq8zAEcOX] = 3.0;
            else if (XU96JP8QxDsm[eBKyq8zAEcOX] >= 75)
                c4pfVy[eBKyq8zAEcOX] = 2.7;
            else if (XU96JP8QxDsm[eBKyq8zAEcOX] >= 72)
                c4pfVy[eBKyq8zAEcOX] = 2.3;
            else if (XU96JP8QxDsm[eBKyq8zAEcOX] >= (308 - 240))
                c4pfVy[eBKyq8zAEcOX] = 2.0;
            else if (XU96JP8QxDsm[eBKyq8zAEcOX] >= 64)
                c4pfVy[eBKyq8zAEcOX] = (924.5 - 923.0);
            else if (XU96JP8QxDsm[eBKyq8zAEcOX] >= 60)
                c4pfVy[eBKyq8zAEcOX] = 1.0;
            else
                c4pfVy[eBKyq8zAEcOX] = 0.0;
            eBKyq8zAEcOX = eBKyq8zAEcOX + 1;
        };
    }
    {
        eBKyq8zAEcOX = 0;
        while (eBKyq8zAEcOX <= x7TOv5t - 1) {
            xh1FHp = xh1FHp + Ao4bi5hN3H2[eBKyq8zAEcOX];
            TYhP7ZXqfNdJ = TYhP7ZXqfNdJ +Ao4bi5hN3H2[eBKyq8zAEcOX] * c4pfVy[eBKyq8zAEcOX];
            eBKyq8zAEcOX = eBKyq8zAEcOX + 1;
        };
    }
    ptnTZl = TYhP7ZXqfNdJ / (double ) (xh1FHp);
    printf ("%.2lf", ptnTZl);
}

