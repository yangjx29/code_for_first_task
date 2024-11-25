int main () {
    double  b;
    int a;
    double  juli [(1272 - 272)];
    int x [(527 - 427)], y [(1022 - 922)], z [(1069 - 969)], n, i, j, k = (256 - 256), xx [(974 - 874)], yy [(1093 - 993)], zz [(251 - 151)], N8ondMHN3Se [(773 - 673)], yyy [100], zzz [100];
    scanf ("%d", &n);
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
    for (i = (87 - 86); n >= i; i++) {
        scanf ("%d %d %d", &x[i], &y[i], &z[i]);
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
    for (i = (521 - 520); i < n; i++) {
        for (j = i + (680 - 679); n >= j; j++) {
            k++;
            juli[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            xx[k] = x[i];
            yy[k] = y[i];
            zz[k] = z[i];
            N8ondMHN3Se[k] = x[j];
            yyy[k] = y[j];
            zzz[k] = z[j];
        };
    }
    {
        i = 966 - 965;
        while (k >= i) {
            for (j = (233 - 232); j <= k - i; j++)
                if (juli[j + (154 - 153)] > juli[j]) {
                    b = juli[j];
                    juli[j] = juli[j + (847 - 846)];
                    juli[j + (528 - 527)] = b;
                    a = xx[j];
                    xx[j] = xx[j + (675 - 674)];
                    xx[j + (943 - 942)] = a;
                    a = yy[j];
                    yy[j] = yy[j + (103 - 102)];
                    yy[j + (11 - 10)] = a;
                    a = zz[j];
                    zz[j] = zz[j + (208 - 207)];
                    zz[j + 1] = a;
                    a = N8ondMHN3Se[j];
                    N8ondMHN3Se[j] = N8ondMHN3Se[j + 1];
                    N8ondMHN3Se[j + 1] = a;
                    a = yyy[j];
                    yyy[j] = yyy[j + 1];
                    yyy[j + 1] = a;
                    a = zzz[j];
                    zzz[j] = zzz[j + 1];
                    zzz[j + 1] = a;
                }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i++;
        };
    }
    for (i = 1; i <= k; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", xx[i], yy[i], zz[i], N8ondMHN3Se[i], yyy[i], zzz[i], juli[i]);
    }
    return 0;
}

