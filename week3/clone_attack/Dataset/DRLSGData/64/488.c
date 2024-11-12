int main () {
    double  z08rLVl35Mx [(864 - 819)];
    int a [45];
    int Y851KBSVN [45];
    int tkij0c [(458 - 428)];
    double  c, TN3MfB;
    int ijECol8Sy19, ZZ9qtcy7 = (802 - 802), G5ta3o9j1, K6PbcE, cIH8KGhVt;
    scanf ("%d", &ijECol8Sy19);
    for (int XRE681Oyu = (463 - 463);
    XRE681Oyu < (167 - 164) * ijECol8Sy19; XRE681Oyu++) {
        scanf ("%d", &tkij0c[XRE681Oyu]);
    }
    {
        int XRE681Oyu = (764 - 764);
        for (; XRE681Oyu < ijECol8Sy19 - (664 - 663);) {
            {
                int j = XRE681Oyu +(183 - 182);
                for (; j < ijECol8Sy19;) {
                    c = pow ((459.0 - 458.0) * (tkij0c[(733 - 730) * j] - tkij0c[(155 - 152) * XRE681Oyu]), (775.0 - 773.0)) + pow (1.0 * (tkij0c[(523 - 520) * j + (319 - 318)] - tkij0c[(472 - 469) * XRE681Oyu +(716 - 715)]), (620.0 - 618.0)) + pow (1.0 * (tkij0c[(95 - 92) * j + (905 - 903)] - tkij0c[(768 - 765) * XRE681Oyu +(895 - 893)]), 2.0);
                    z08rLVl35Mx[ZZ9qtcy7] = sqrt (c);
                    a[ZZ9qtcy7] = XRE681Oyu;
                    Y851KBSVN[ZZ9qtcy7] = j;
                    ZZ9qtcy7++;
                    j++;
                }
            }
            XRE681Oyu++;
        }
    }
    {
        G5ta3o9j1 = (106 - 105);
        for (; G5ta3o9j1 < ijECol8Sy19 * (ijECol8Sy19 - (12 - 11)) / (175 - 173);) {
            K6PbcE = (729 - 729);
            for (; K6PbcE < ijECol8Sy19 * (ijECol8Sy19 - (82 - 81)) / 2 - G5ta3o9j1;) {
                if (z08rLVl35Mx[K6PbcE] < z08rLVl35Mx[K6PbcE +(402 - 401)]) {
                    TN3MfB = z08rLVl35Mx[K6PbcE];
                    z08rLVl35Mx[K6PbcE] = z08rLVl35Mx[K6PbcE +(383 - 382)];
                    z08rLVl35Mx[K6PbcE +(647 - 646)] = TN3MfB;
                    cIH8KGhVt = a[K6PbcE];
                    a[K6PbcE] = a[K6PbcE +(523 - 522)];
                    a[K6PbcE +(887 - 886)] = cIH8KGhVt;
                    cIH8KGhVt = Y851KBSVN[K6PbcE];
                    Y851KBSVN[K6PbcE] = Y851KBSVN[K6PbcE +(671 - 670)];
                    Y851KBSVN[K6PbcE +(345 - 344)] = cIH8KGhVt;
                }
                K6PbcE++;
            }
            G5ta3o9j1++;
        }
    }
    for (G5ta3o9j1 = (826 - 826); G5ta3o9j1 < ijECol8Sy19 * (ijECol8Sy19 - 1) / 2; G5ta3o9j1++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", tkij0c[3 * a[G5ta3o9j1]], tkij0c[3 * a[G5ta3o9j1] + 1], tkij0c[3 * a[G5ta3o9j1] + 2], tkij0c[3 * Y851KBSVN[G5ta3o9j1]], tkij0c[3 * Y851KBSVN[G5ta3o9j1] + 1], tkij0c[3 * Y851KBSVN[G5ta3o9j1] + 2], z08rLVl35Mx[G5ta3o9j1]);
    }
    return (385 - 385);
}

