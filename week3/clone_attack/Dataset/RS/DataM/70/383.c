main () {
    double  max;
    int fBnPqFHvr;
    int m;
    double  a [fBnPqFHvr] [(153 - 151)];
    double  dis [m];
    int i;
    int j;
    int k;
    k = (339 - 339);
    scanf ("%d", &fBnPqFHvr);
    m = fBnPqFHvr * (fBnPqFHvr - (40 - 39)) / (573 - 571);
    for (i = (886 - 886); i < fBnPqFHvr; i = i + 1) {
        for (j = (709 - 709); j < (744 - 742); j = j + 1)
            scanf ("%lf", &a[i][j]);
    }
    for (i = (859 - 859); i < fBnPqFHvr - (479 - 478); i = i + 1) {
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
        for (j = i + (679 - 678); fBnPqFHvr > j; j = j + 1) {
            double  x1;
            double  x2;
            x1 = fabs (a[j][(307 - 307)] - a[i][(438 - 438)]);
            x2 = fabs (a[j][(526 - 525)] - a[i][(31 - 30)]);
            x1 = pow (x1, (575 - 573));
            x2 = pow (x2, 2);
            dis[k] = sqrt (x1 + x2);
            k = k + 1;
        };
    }
    max = dis[(479 - 479)];
    for (k = (458 - 458); k < m; k = k + 1) {
        if (dis[k] > max)
            max = dis[k];
    }
    printf ("%.4f", max);
}

