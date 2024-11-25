double  cal (int a [3], int b [3]) {
    int BIVznAh6KH = 0, sum = 0;
    for (; BIVznAh6KH < 3; BIVznAh6KH++)
        sum = sum + (a[BIVznAh6KH] - b[BIVznAh6KH]) * (a[BIVznAh6KH] - b[BIVznAh6KH]);
    return sqrt (sum);
}

int change (double  a [7], double  b [7]) {
    double  temp;
    {
        if (0) {
            return 0;
        }
    }
    int BIVznAh6KH;
    {
        BIVznAh6KH = 0;
        for (; BIVznAh6KH < 7;) {
            temp = a[BIVznAh6KH];
            a[BIVznAh6KH] = b[BIVznAh6KH];
            b[BIVznAh6KH] = temp;
            BIVznAh6KH++;
        }
    }
    return 0;
}

void  main () {
    int BIVznAh6KH, QtS5NuQ3Ph, n, a [10] [3], k1 = 0, GmpPRUHQXJD;
    double  b [60] [7];
    scanf ("%d", &n);
    {
        BIVznAh6KH = 0;
        while (BIVznAh6KH < n) {
            {
                QtS5NuQ3Ph = 0;
                for (; 3 > QtS5NuQ3Ph;) {
                    scanf ("%d", &a[BIVznAh6KH][QtS5NuQ3Ph]);
                    QtS5NuQ3Ph++;
                }
            }
            BIVznAh6KH++;
        }
    }
    for (BIVznAh6KH = 0; BIVznAh6KH < n - 1; BIVznAh6KH++)
        for (QtS5NuQ3Ph = BIVznAh6KH +1; n > QtS5NuQ3Ph; QtS5NuQ3Ph++) {
            {
                GmpPRUHQXJD = 0;
                for (; GmpPRUHQXJD < 3;) {
                    b[k1][GmpPRUHQXJD] = a[BIVznAh6KH][GmpPRUHQXJD];
                    GmpPRUHQXJD++;
                }
            }
            {
                GmpPRUHQXJD = 0;
                for (; GmpPRUHQXJD < 3;) {
                    b[k1][GmpPRUHQXJD +3] = a[QtS5NuQ3Ph][GmpPRUHQXJD];
                    GmpPRUHQXJD++;
                }
            }
            b[k1][6] = cal (a[BIVznAh6KH], a[QtS5NuQ3Ph]);
            k1++;
        }
    {
        BIVznAh6KH = 0;
        for (; BIVznAh6KH < k1;) {
            {
                QtS5NuQ3Ph = 0;
                for (; QtS5NuQ3Ph < k1 - 1;) {
                    if (b[QtS5NuQ3Ph +1][6] > b[QtS5NuQ3Ph][6])
                        change (b[QtS5NuQ3Ph], b[QtS5NuQ3Ph +1]);
                    QtS5NuQ3Ph++;
                }
            }
            BIVznAh6KH++;
        }
    }
    {
        BIVznAh6KH = 0;
        for (; BIVznAh6KH < k1;) {
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", b[BIVznAh6KH][0], b[BIVznAh6KH][1], b[BIVznAh6KH][2], b[BIVznAh6KH][3], b[BIVznAh6KH][4], b[BIVznAh6KH][5], b[BIVznAh6KH][6]);
            BIVznAh6KH++;
        }
    }
}

