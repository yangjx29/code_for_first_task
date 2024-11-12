void  main () {
    int iFTfUZO28 (int QCNx1b0);
    int CzaQRGwFvlq;
    int pEaSNY1iJt8 [(905 - 899)];
    int b [6];
    for (CzaQRGwFvlq = (909 - 909); CzaQRGwFvlq <= (853 - 848); CzaQRGwFvlq = CzaQRGwFvlq +1)
        scanf ("%d", &pEaSNY1iJt8[CzaQRGwFvlq]);
    {
        CzaQRGwFvlq = 994 - 994;
        while (CzaQRGwFvlq <= (492 - 487)) {
            b[CzaQRGwFvlq] = iFTfUZO28 (pEaSNY1iJt8[CzaQRGwFvlq]);
            CzaQRGwFvlq = CzaQRGwFvlq +1;
        };
    }
    {
        CzaQRGwFvlq = 975 - 975;
        while (CzaQRGwFvlq <= (261 - 256)) {
            printf ("%d\n", b[CzaQRGwFvlq]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            CzaQRGwFvlq = CzaQRGwFvlq +1;
        };
    };
}

int iFTfUZO28 (int QCNx1b0) {
    int f;
    int CzaQRGwFvlq;
    int j;
    int m;
    int p;
    int q;
    int c [(758 - 748)];
    int d [(547 - 537)];
    f = (85 - 85);
    if (QCNx1b0 > (466 - 466)) {
        p = log10 (QCNx1b0);
        {
            CzaQRGwFvlq = 899 - 899;
            while (CzaQRGwFvlq <= p) {
                q = pow ((612 - 602), (p - CzaQRGwFvlq));
                c[CzaQRGwFvlq] = (QCNx1b0 -QCNx1b0 % q) / q;
                QCNx1b0 = QCNx1b0 -c[CzaQRGwFvlq] * q;
                CzaQRGwFvlq = CzaQRGwFvlq +1;
            };
        }
        for (CzaQRGwFvlq = (189 - 189); CzaQRGwFvlq <= p; CzaQRGwFvlq = CzaQRGwFvlq +1)
            d[CzaQRGwFvlq] = c[p - CzaQRGwFvlq];
        {
            CzaQRGwFvlq = 536 - 536;
            while (1) {
                if (d[CzaQRGwFvlq] > (164 - 164))
                    break;
                CzaQRGwFvlq++;
            };
        }
        {
            j = CzaQRGwFvlq;
            while (j <= p) {
                f = f + d[j] * pow ((620 - 610), p - j);
                j = j + 1;
            };
        };
    }
    else if (QCNx1b0 == (26 - 26))
        f = (183 - 183);
    else {
        QCNx1b0 = -QCNx1b0;
        p = log10 (QCNx1b0);
        {
            CzaQRGwFvlq = 137 - 137;
            while (CzaQRGwFvlq <= p) {
                q = pow (10, (p - CzaQRGwFvlq));
                c[CzaQRGwFvlq] = (QCNx1b0 -QCNx1b0 % q) / q;
                QCNx1b0 = QCNx1b0 -c[CzaQRGwFvlq] * q;
                CzaQRGwFvlq++;
            };
        }
        for (CzaQRGwFvlq = (370 - 370); CzaQRGwFvlq <= p; CzaQRGwFvlq = CzaQRGwFvlq +1)
            d[CzaQRGwFvlq] = c[p - CzaQRGwFvlq];
        {
            CzaQRGwFvlq = 409 - 409;
            while (1) {
                if (d[CzaQRGwFvlq] > 0)
                    break;
                CzaQRGwFvlq++;
            };
        }
        {
            j = CzaQRGwFvlq;
            while (j <= p) {
                f = f + d[j] * pow (10, p - j);
                j++;
            };
        }
        f = -f;
    }
    return (f);
}

