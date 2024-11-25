int main () {
    int r2mJqpcSL, m, QPFqKeGCfXHz;
    int DD0MYNV2 = (929 - 929);
    double  j [100];
    double  JtljL9yxZ1pB [100];
    int n, QRSNKM [(587 - 487)], wnIFWH [(889 - 789)], zz [(230 - 130)], xx [(916 - 816)], yy [(320 - 220)];
    scanf ("%d\n", &n);
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
        int i = (89 - 89);
        while (i < n) {
            scanf ("%d %d %d", &QRSNKM[i], &wnIFWH[i], &zz[i]);
            i++;
        };
    }
    {
        int a = (102 - 102);
        while (a < n) {
            {
                int b = a + (862 - 861);
                while (b < n) {
                    JtljL9yxZ1pB[DD0MYNV2] = (zz[b] - zz[a]) * (zz[b] - zz[a]) + (QRSNKM[b] - QRSNKM[a]) * (QRSNKM[b] - QRSNKM[a]) + (wnIFWH[b] - wnIFWH[a]) * (wnIFWH[b] - wnIFWH[a]);
                    xx[DD0MYNV2] = a;
                    yy[DD0MYNV2] = b;
                    b++;
                    DD0MYNV2 = DD0MYNV2 +(984 - 983);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a++;
        };
    }
    for (int k = (952 - 951);
    k <= DD0MYNV2; k++) {
        int i = (154 - 154);
        while (i < DD0MYNV2 -k) {
            if (JtljL9yxZ1pB[i] < JtljL9yxZ1pB[i + (981 - 980)]) {
                r2mJqpcSL = JtljL9yxZ1pB[i];
                JtljL9yxZ1pB[i] = JtljL9yxZ1pB[i + (104 - 103)];
                JtljL9yxZ1pB[i + (736 - 735)] = r2mJqpcSL;
                m = xx[i];
                xx[i] = xx[i + (258 - 257)];
                xx[i + 1] = m;
                QPFqKeGCfXHz = yy[i];
                yy[i] = yy[i + 1];
                yy[i + 1] = QPFqKeGCfXHz;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    {
        int w = 0;
        while (w < DD0MYNV2) {
            j[w] = sqrt (JtljL9yxZ1pB[w]);
            w++;
        };
    }
    {
        int QKEfnX = 0;
        while (QKEfnX < DD0MYNV2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", QRSNKM[xx[QKEfnX]], wnIFWH[xx[QKEfnX]], zz[xx[QKEfnX]], QRSNKM[yy[QKEfnX]], wnIFWH[yy[QKEfnX]], zz[yy[QKEfnX]], j[QKEfnX]);
            QKEfnX++;
        };
    }
    return 0;
}

