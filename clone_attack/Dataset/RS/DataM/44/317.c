int SGnqY1l (int XaEk7UL1g0iy) {
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
    if (XaEk7UL1g0iy == (192 - 192))
        return 0;
    else if (XaEk7UL1g0iy > 0) {
        int Hs4G6xA, umGP0YSqh = (169 - 168), rrPXmYk85 = 0, i, i6IXTBobDSVf, nCuYpHxGm9, P6GxH7Bj = 0;
        int QZuMCzoeSiJh [umGP0YSqh], qVMCtU5Ep1q4 [umGP0YSqh];
        int dTRDcCz4xqlb;
        Hs4G6xA = XaEk7UL1g0iy;
        {
            i = 465 - 464;
            while (1) {
                if (Hs4G6xA % (486 - 476) == 0)
                    rrPXmYk85 = rrPXmYk85 + 1;
                else
                    break;
                Hs4G6xA = Hs4G6xA / 10;
                i = i + 1;
            };
        }
        Hs4G6xA = XaEk7UL1g0iy;
        {
            i = 1;
            while (1) {
                if (Hs4G6xA / 10 != 0)
                    umGP0YSqh = umGP0YSqh + 1;
                else
                    break;
                Hs4G6xA = Hs4G6xA / 10;
                i = i + 1;
            };
        }
        Hs4G6xA = XaEk7UL1g0iy;
        for (i6IXTBobDSVf = 0; i6IXTBobDSVf < umGP0YSqh; i6IXTBobDSVf = i6IXTBobDSVf + 1) {
            QZuMCzoeSiJh[i6IXTBobDSVf] = Hs4G6xA;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Hs4G6xA = Hs4G6xA / 10;
        }
        for (nCuYpHxGm9 = rrPXmYk85; nCuYpHxGm9 < umGP0YSqh; nCuYpHxGm9 = nCuYpHxGm9 + 1) {
            qVMCtU5Ep1q4[nCuYpHxGm9] = QZuMCzoeSiJh[nCuYpHxGm9] % 10;
            dTRDcCz4xqlb = umGP0YSqh - nCuYpHxGm9 - 1;
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
            P6GxH7Bj += qVMCtU5Ep1q4[nCuYpHxGm9] * pow (10, dTRDcCz4xqlb);
        }
        return P6GxH7Bj;
    }
    else {
        int Hs4G6xA, umGP0YSqh = 1, rrPXmYk85 = 0, i, i6IXTBobDSVf, nCuYpHxGm9, P6GxH7Bj = 0;
        int QZuMCzoeSiJh [umGP0YSqh], qVMCtU5Ep1q4 [umGP0YSqh];
        int dTRDcCz4xqlb;
        Hs4G6xA = -XaEk7UL1g0iy;
        for (i = 1;; i = i + 1) {
            if (Hs4G6xA % 10 == 0)
                rrPXmYk85++;
            else
                break;
            Hs4G6xA = Hs4G6xA / 10;
        }
        Hs4G6xA = -XaEk7UL1g0iy;
        for (i = 1;; i = i + 1) {
            if (Hs4G6xA / 10 != 0)
                umGP0YSqh++;
            else
                break;
            Hs4G6xA = Hs4G6xA / 10;
        }
        Hs4G6xA = -XaEk7UL1g0iy;
        for (i6IXTBobDSVf = 0; i6IXTBobDSVf < umGP0YSqh; i6IXTBobDSVf = i6IXTBobDSVf + 1) {
            QZuMCzoeSiJh[i6IXTBobDSVf] = Hs4G6xA;
            Hs4G6xA = Hs4G6xA / 10;
        }
        for (nCuYpHxGm9 = rrPXmYk85; nCuYpHxGm9 < umGP0YSqh; nCuYpHxGm9++) {
            qVMCtU5Ep1q4[nCuYpHxGm9] = QZuMCzoeSiJh[nCuYpHxGm9] % 10;
            dTRDcCz4xqlb = umGP0YSqh - nCuYpHxGm9 - 1;
            P6GxH7Bj += qVMCtU5Ep1q4[nCuYpHxGm9] * pow (10, dTRDcCz4xqlb);
        }
        return (-P6GxH7Bj);
    };
}

main () {
    int P6GxH7Bj, QZuMCzoeSiJh, Hs4G6xA = 1;
    for (Hs4G6xA = 1; Hs4G6xA <= (853 - 847); Hs4G6xA = Hs4G6xA +1) {
        scanf ("%d", &P6GxH7Bj);
        QZuMCzoeSiJh = SGnqY1l (P6GxH7Bj);
        printf ("%d\n", QZuMCzoeSiJh);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

