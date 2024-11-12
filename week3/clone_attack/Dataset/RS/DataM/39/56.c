void  main () {
    struct   student {
        char YwlDom6 [21];
        int F2J5WRfD;
        int piwz0s;
        char c;
        char dhn7OGmSvKb;
        int PKmNLBeW;
    }
    ozUeoNwc [100];
    int QANUHpWwt;
    int sum [100] = {(946 - 946)};
    int VmQkYx;
    int M5UMx4q;
    QANUHpWwt = (264 - 264);
    scanf ("%d", &M5UMx4q);
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
    for (VmQkYx = 0; M5UMx4q > VmQkYx; VmQkYx = VmQkYx +1) {
        scanf ("%s %d %d %c %c %d", ozUeoNwc[VmQkYx].YwlDom6, &ozUeoNwc[VmQkYx].F2J5WRfD, &ozUeoNwc[VmQkYx].piwz0s, &ozUeoNwc[VmQkYx].c, &ozUeoNwc[VmQkYx].dhn7OGmSvKb, &ozUeoNwc[VmQkYx].PKmNLBeW);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        VmQkYx = 0;
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
        while (VmQkYx < M5UMx4q) {
            if (ozUeoNwc[VmQkYx].F2J5WRfD > (914 - 834) && ozUeoNwc[VmQkYx].PKmNLBeW >= 1)
                sum[VmQkYx] = sum[VmQkYx] + 8000;
            if (85 < ozUeoNwc[VmQkYx].F2J5WRfD && ozUeoNwc[VmQkYx].piwz0s > 80)
                sum[VmQkYx] = sum[VmQkYx] + 4000;
            if (ozUeoNwc[VmQkYx].F2J5WRfD > 90)
                sum[VmQkYx] = sum[VmQkYx] + 2000;
            if (ozUeoNwc[VmQkYx].F2J5WRfD > 85 && ozUeoNwc[VmQkYx].dhn7OGmSvKb == 'Y')
                sum[VmQkYx] = sum[VmQkYx] + 1000;
            if (ozUeoNwc[VmQkYx].piwz0s > 80 && ozUeoNwc[VmQkYx].c == 'Y')
                sum[VmQkYx] = sum[VmQkYx] + 850;
            VmQkYx = VmQkYx +1;
        };
    }
    {
        VmQkYx = 0;
        while (VmQkYx < M5UMx4q) {
            QANUHpWwt = QANUHpWwt +sum[VmQkYx];
            VmQkYx = VmQkYx +1;
        };
    }
    {
        VmQkYx = 1;
        while (VmQkYx < M5UMx4q) {
            if (sum[0] < sum[VmQkYx]) {
                ozUeoNwc[0] = ozUeoNwc[VmQkYx];
                sum[0] = sum[VmQkYx];
            }
            VmQkYx = VmQkYx +1;
        };
    }
    printf ("%s\n", ozUeoNwc[0].YwlDom6);
    printf ("%d\n", sum[0]);
    printf ("%d", QANUHpWwt);
}

