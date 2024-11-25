int main () {
    int zEw3uhX1NIV;
    double  e;
    int q;
    int i;
    int j;
    double  t7Lg8Q [100] [100], jpfCVq3oDYUg [100];
    int n;
    int x [100], aXE7gds9pWa [100], fFt62auqmwT [100];
    int k;
    double  d [100];
    q = (530 - 530);
    scanf ("%d", &n);
    {
        i = (675 - 675);
        while (i < n) {
            scanf ("%d%d%d", &x[i], &aXE7gds9pWa[i], &fFt62auqmwT[i]);
            i = i + (788 - 787);
        }
    }
    {
        j = 0;
        while (j < n - (180 - 179)) {
            {
                i = j + (837 - 836);
                while (i < n) {
                    t7Lg8Q[j][i] = sqrt ((x[j] - x[i]) * (x[j] - x[i]) + (aXE7gds9pWa[j] - aXE7gds9pWa[i]) * (aXE7gds9pWa[j] - aXE7gds9pWa[i]) + (fFt62auqmwT[j] - fFt62auqmwT[i]) * (fFt62auqmwT[j] - fFt62auqmwT[i]));
                    jpfCVq3oDYUg[q] = t7Lg8Q[j][i];
                    i = i + (353 - 352);
                    q = q + 1;
                }
            }
            j = j + (810 - 809);
        }
    }
    {
        k = 1;
        while (k <= q) {
            {
                i = 0;
                while (i < q - k) {
                    if (jpfCVq3oDYUg[i] > jpfCVq3oDYUg[i + 1]) {
                        e = jpfCVq3oDYUg[i + 1];
                        jpfCVq3oDYUg[i + 1] = jpfCVq3oDYUg[i];
                        jpfCVq3oDYUg[i] = e;
                    }
                    i = i + 1;
                }
            }
            k = k + 1;
        }
    }
    zEw3uhX1NIV = 0;
    for (k = 1; k < q; k = k + 1) {
        if (jpfCVq3oDYUg[k - 1] != jpfCVq3oDYUg[k]) {
            d[zEw3uhX1NIV] = jpfCVq3oDYUg[k - 1];
            zEw3uhX1NIV = zEw3uhX1NIV + 1;
        }
    }
    if (jpfCVq3oDYUg[q - 1] != jpfCVq3oDYUg[q - 2]) {
        d[zEw3uhX1NIV] = jpfCVq3oDYUg[q - 1];
        zEw3uhX1NIV = zEw3uhX1NIV + 1;
    }
    {
        k = zEw3uhX1NIV - 1;
        while (k > 0) {
            {
                j = 0;
                while (j < n - 1) {
                    for (i = j + 1; i < n; i = i + 1) {
                        if (d[k] == t7Lg8Q[j][i]) {
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[j], aXE7gds9pWa[j], fFt62auqmwT[j], x[i], aXE7gds9pWa[i], fFt62auqmwT[i], t7Lg8Q[j][i]);
                        }
                    }
                    j++;
                }
            }
            k--;
        }
    }
    for (j = 0; j < n - 1; j = j + 1) {
        i = j + 1;
        while (i < n) {
            if (d[0] == t7Lg8Q[j][i]) {
                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[j], aXE7gds9pWa[j], fFt62auqmwT[j], x[i], aXE7gds9pWa[i], fFt62auqmwT[i], t7Lg8Q[j][i]);
            }
            i = i + 1;
        }
    }
    return 0;
}

